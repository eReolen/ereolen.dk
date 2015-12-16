<?php
/**
 * @file
 * reol_help.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function reol_help_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'faq_page';
  $pm_existing_page->label = 'FAQ page';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'faq-page';
  $export['faq_page'] = $pm_existing_page;

  return $export;
}
