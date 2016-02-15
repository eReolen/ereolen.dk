<?php
/**
 * @file
 * reol_help.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function reol_help_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_faq_category_page_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'faq_category_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'reol_frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'highlight' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '824d53d8-6113-4d6d-9693-7bda9a47a27d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e75a4edd-e4f2-4f55-a8dd-0c7f66254ff8';
    $pane->panel = 'left';
    $pane->type = 'pm_existing_pages';
    $pane->subtype = 'pm_existing_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      0 => 'task_id',
      'task_id' => 'faq_category_page',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'faq-category-page',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e75a4edd-e4f2-4f55-a8dd-0c7f66254ff8';
    $display->content['new-e75a4edd-e4f2-4f55-a8dd-0c7f66254ff8'] = $pane;
    $display->panels['left'][0] = 'new-e75a4edd-e4f2-4f55-a8dd-0c7f66254ff8';
    $pane = new stdClass();
    $pane->pid = 'new-641f3a3d-13dd-4a43-815c-d9ed40e34a51';
    $pane->panel = 'right';
    $pane->type = 'quick_guide';
    $pane->subtype = 'quick_guide';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '641f3a3d-13dd-4a43-815c-d9ed40e34a51';
    $display->content['new-641f3a3d-13dd-4a43-815c-d9ed40e34a51'] = $pane;
    $display->panels['right'][0] = 'new-641f3a3d-13dd-4a43-815c-d9ed40e34a51';
    $pane = new stdClass();
    $pane->pid = 'new-25434510-51a2-4821-81e5-02db4b7406a6';
    $pane->panel = 'right';
    $pane->type = 'single_review';
    $pane->subtype = 'single_review';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '25434510-51a2-4821-81e5-02db4b7406a6';
    $display->content['new-25434510-51a2-4821-81e5-02db4b7406a6'] = $pane;
    $display->panels['right'][1] = 'new-25434510-51a2-4821-81e5-02db4b7406a6';
    $pane = new stdClass();
    $pane->pid = 'new-4793e0d2-5053-4164-928c-c6f0b6302b15';
    $pane->panel = 'right';
    $pane->type = 'facebook_likebox';
    $pane->subtype = 'facebook_likebox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'width' => '270',
      'height' => '424',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4793e0d2-5053-4164-928c-c6f0b6302b15';
    $display->content['new-4793e0d2-5053-4164-928c-c6f0b6302b15'] = $pane;
    $display->panels['right'][2] = 'new-4793e0d2-5053-4164-928c-c6f0b6302b15';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-641f3a3d-13dd-4a43-815c-d9ed40e34a51';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_faq_category_page_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_faq_page_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'faq_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'reol_frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'branding' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'highlight' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa9478f5-4b97-4d07-9717-e1bbdd17f4c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a115e362-7fe9-4976-819b-e5c7630ae7eb';
    $pane->panel = 'left';
    $pane->type = 'faq-description';
    $pane->subtype = 'faq-description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a115e362-7fe9-4976-819b-e5c7630ae7eb';
    $display->content['new-a115e362-7fe9-4976-819b-e5c7630ae7eb'] = $pane;
    $display->panels['left'][0] = 'new-a115e362-7fe9-4976-819b-e5c7630ae7eb';
    $pane = new stdClass();
    $pane->pid = 'new-f5496a6d-95d4-4767-848c-7dfb446b5225';
    $pane->panel = 'left';
    $pane->type = 'pm_existing_pages';
    $pane->subtype = 'pm_existing_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      0 => 'task_id',
      'task_id' => 'faq_page',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'faq-page',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5496a6d-95d4-4767-848c-7dfb446b5225';
    $display->content['new-f5496a6d-95d4-4767-848c-7dfb446b5225'] = $pane;
    $display->panels['left'][1] = 'new-f5496a6d-95d4-4767-848c-7dfb446b5225';
    $pane = new stdClass();
    $pane->pid = 'new-8a8d6d73-7fe3-4f76-9935-2b0832491317';
    $pane->panel = 'right';
    $pane->type = 'quick_guide';
    $pane->subtype = 'quick_guide';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a8d6d73-7fe3-4f76-9935-2b0832491317';
    $display->content['new-8a8d6d73-7fe3-4f76-9935-2b0832491317'] = $pane;
    $display->panels['right'][0] = 'new-8a8d6d73-7fe3-4f76-9935-2b0832491317';
    $pane = new stdClass();
    $pane->pid = 'new-12df306c-f003-4296-9d64-ab48167c099b';
    $pane->panel = 'right';
    $pane->type = 'single_review';
    $pane->subtype = 'single_review';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '12df306c-f003-4296-9d64-ab48167c099b';
    $display->content['new-12df306c-f003-4296-9d64-ab48167c099b'] = $pane;
    $display->panels['right'][1] = 'new-12df306c-f003-4296-9d64-ab48167c099b';
    $pane = new stdClass();
    $pane->pid = 'new-6a135fd6-f1de-4a26-ad31-f3f8e43687e7';
    $pane->panel = 'right';
    $pane->type = 'facebook_likebox';
    $pane->subtype = 'facebook_likebox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'width' => '270',
      'height' => '424',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6a135fd6-f1de-4a26-ad31-f3f8e43687e7';
    $display->content['new-6a135fd6-f1de-4a26-ad31-f3f8e43687e7'] = $pane;
    $display->panels['right'][2] = 'new-6a135fd6-f1de-4a26-ad31-f3f8e43687e7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f5496a6d-95d4-4767-848c-7dfb446b5225';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_faq_page_panel_context'] = $handler;

  return $export;
}
