<?php

namespace Drupal\ereol_app_feeds\Feed;

use Drupal\ereol_app_feeds\Helper\NodeHelper;
use EntityFieldQuery;

/**
 * Paragraphs feed.
 */
class ThemesFeed extends AbstractFeed {

  /**
   * Get feed data.
   */
  public function getData() {
    $max_number_of_items = (int) ereol_app_feeds_variable_get('ereol_app_feeds_themes', 'max_number_of_items', 50);

    $entity_type = NodeHelper::ENTITY_TYPE_NODE;
    $bundle = 'article';
    $query = new EntityFieldQuery();
    $query
      ->entityCondition('entity_type', $entity_type)
      ->entityCondition('bundle', $bundle)
      ->propertyCondition('status', NODE_PUBLISHED)
      ->fieldCondition('field_show_in_app', 'value', 1)
      ->propertyOrderBy('created', 'DESC')
      ->range(0, $max_number_of_items);

    $result = $query->execute();

    if (isset($result[$entity_type])) {
      $nodes = node_load_multiple(array_keys($result[$entity_type]));
      return array_values(array_map(function ($node) {
        return $this->paragraphHelper->getThemeData($node);
      }, $nodes));
    }

    return [];
  }

}
