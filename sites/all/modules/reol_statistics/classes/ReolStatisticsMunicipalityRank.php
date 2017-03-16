<?php

/**
 * @file
 * Municipality rank statistics.
 */

/**
 * Municipality rankstatistics implementation.
 */
class ReolStatisticsMunicipalityRank implements ReolStatisticsInterface, ReolStatisticsGeneralInterface {

  /**
   * {@inheritdoc}
   */
  public function schema() {
    $schema = array();

    return $schema;
  }

  /**
   * {@inheritdoc}
   */
  public function collect(ReolStatisticsMonth $month) {
    // Nothing to be done, we leech of ReolStatisticsMunicipality's data.
  }

  /**
   * {@inheritdoc}
   */
  public function buildGeneral(ReolStatisticsMonth $from, ReolStatisticsMonth $to) {
    // This table is an aberration, it's not for the given library, but
    // globally, and not for the given period, but always the last month(s),
    // but they insisted.
    $libraries = array();
    foreach (publizon_get_libraries() as $def) {
      if (!empty($def->unilogin_id) &&
          !empty($def->subscribed_users) &&
          $def->subscribed_users > 0) {
        $libraries[$def->unilogin_id] = array(
          'subscribed_users' => $def->subscribed_users,
          'name' => $def->library_name,
        );
      }
    }

    // Avoid excessive casting.
    $month_str = (string) $from;

    $prev_month = $from->prev();

    $header = array(
      t('Position'),
      t('Municipality'),
      t('Loans per student'),
      t('Position (last month)'),
      t('Subscribed students'),
      t('Unique users (% of subscribed)'),
      t('Loans'),
    );

    $rows = array();

    $query = db_select('reol_statistics_municipality', 'm')
      ->fields('m', array('month', 'municipality_id', 'loans', 'users'))
      ->condition('m.month', array($month_str, (string) $prev_month), 'IN');

    // Sort municipalities in order of most loans per subscribed users for
    // both current and previous month.
    $munis = array();
    $prev_munis = array();
    foreach ($query->execute() as $row) {
      if (isset($libraries[$row->municipality_id])) {
        $ratio = $row->loans / $libraries[$row->municipality_id]['subscribed_users'];
        $row->ratio = $ratio;
        if ($row->month == $month_str) {
          $munis[(string) $ratio][] = $row;
        }
        else {
          $prev_munis[(string) $ratio][] = $row;
        }
      }
    }
    krsort($munis);
    krsort($prev_munis);

    // Determine placement of last month, and convert to lookup table.
    $placement = 1;
    $prev_munis_lookup = array();
    foreach ($prev_munis as $items) {
      foreach ($items as $row) {
        $row->placement = $placement;
        $prev_munis_lookup[$row->municipality_id] = $row;
      }
      $placement++;
    }

    // Create table.
    $placement = 1;
    $totals = array(
      'subscribed_users' => 0,
      'loans' => 0,
    );
    foreach ($munis as $items) {
      foreach ($items as $row) {
        $subscribed_users = $libraries[$row->municipality_id]['subscribed_users'];
        $prev_placement = '';
        if (isset($prev_munis_lookup[$row->municipality_id])) {
          $prev_placement = $prev_munis_lookup[$row->municipality_id]->placement;
        }
        $ratio = round($row->ratio, 3);
        $ratio = sprintf('%.3f', $row->ratio);
        $rows[] = array(
          $placement,
          array(
            'data' => $libraries[$row->municipality_id]['name'],
            'class' => 'municipality-column',
          ),
          $ratio,
          $prev_placement,
          $libraries[$row->municipality_id]['subscribed_users'],
          sprintf("%.0f%%", ($row->users / $subscribed_users) * 100),
          $row->loans,
        );
        $totals['subscribed_users'] += $subscribed_users;
        $totals['loans'] += $row->loans;
      }
      $placement++;
    }

    $rows[] = array(
      array(
        'data' => t('Total'),
        'header' => TRUE,
      ),
      '',
      '',
      '',
      $totals['subscribed_users'],
      '',
      $totals['loans'],
    );

    $table = array(
      'attributes' => array(
        'class' => array('statistics-municipality-rank'),
      ),
      'caption' => t('Municipalities ranked by loans per subscribed students'),
      'header' => $header,
      'rows' => $rows,
    );

    return theme('table', $table);
  }

}
