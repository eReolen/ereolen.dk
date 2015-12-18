<?php
/**
 * @file
 * reol_help.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function reol_help_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_faq_category_page';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_faq_category_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_faq_page';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_faq_page'] = $strongarm;

  return $export;
}
