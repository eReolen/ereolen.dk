<?php
/**
 * @file
 * CTools Content Type for listening to an audiobook.
 */

$plugin = array(
  'title' => t('FAQ description node'),
  'description' => t('Show the FAQ description node.'),
  'category' => 'ereolen.dk',
  'single' => TRUE,
  'content type' => 'faq_description',
  'render callback' => 'faq_description_content_type_render',
  'edit form' => 'faq_description_content_type_edit_form',
);

/**
 * Render the content type.
 */
function faq_description_content_type_render($subtype, $conf, $panel_args, $context) {
  $nid = variable_get('reol_help_faq_description_nid', FALSE);
  // If we have no node configured, hide ourself.
  if (!$nid) {
    return new StdClass();
  }

  // Just use ctools node display, using our nid.
  $ctools_conf = [
    'nid' => $nid,
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
  ];
  module_load_include('inc', 'ctools', 'plugins/content_types/node/node');
  return ctools_node_content_type_render('node', $ctools_conf, $panel_args);
}

/**
 * Admin settings form.
 */
function faq_description_content_type_edit_form($form, &$form_state) {
  $form['faq_description_nid'] = [
    '#type' => 'textfield',
    '#title' => t('Description node id'),
    '#description' => t('The node id of the FAQ description article'),
  ];

  return $form;
}

/**
 * Submit handler for settings form.
 */
function faq_description_content_type_edit_form_submit($form, &$form_state) {
  if (!empty($form_state['values']['faq_description_nid'])) {
    variable_set('reol_help_faq_description_nid', $form_state['values']['faq_description_nid']);
  }
}
