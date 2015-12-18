<?php
/**
 * @file
 * reol_help.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reol_help_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function reol_help_image_default_styles() {
  $styles = array();

  // Exported image style: reol_faq_category_image.
  $styles['reol_faq_category_image'] = array(
    'name' => 'reol_faq_category_image',
    'label' => 'reol_faq_category_image',
    'effects' => array(
      1 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 112,
          'height' => 112,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
