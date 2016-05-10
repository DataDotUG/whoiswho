<?php
/**
 * @file
 * datadotug_user_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function datadotug_user_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__my_account';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'My Account',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'my_account',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6d27a5ef-2518-415e-8b52-4c260818a168';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1cd58ab2-0a79-4a8b-89b3-dd499afb87df';
    $pane->panel = 'left';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1cd58ab2-0a79-4a8b-89b3-dd499afb87df';
    $display->content['new-1cd58ab2-0a79-4a8b-89b3-dd499afb87df'] = $pane;
    $display->panels['left'][0] = 'new-1cd58ab2-0a79-4a8b-89b3-dd499afb87df';
    $pane = new stdClass();
    $pane->pid = 'new-9fd16079-ba95-4690-bd69-1cc49ec87cf0';
    $pane->panel = 'left';
    $pane->type = 'user_signature';
    $pane->subtype = 'user_signature';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9fd16079-ba95-4690-bd69-1cc49ec87cf0';
    $display->content['new-9fd16079-ba95-4690-bd69-1cc49ec87cf0'] = $pane;
    $display->panels['left'][1] = 'new-9fd16079-ba95-4690-bd69-1cc49ec87cf0';
    $pane = new stdClass();
    $pane->pid = 'new-138ad964-7788-4f02-8c12-3f7bd617f437';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_term_quadrants';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '138ad964-7788-4f02-8c12-3f7bd617f437';
    $display->content['new-138ad964-7788-4f02-8c12-3f7bd617f437'] = $pane;
    $display->panels['right'][0] = 'new-138ad964-7788-4f02-8c12-3f7bd617f437';
    $pane = new stdClass();
    $pane->pid = 'new-4dbc7f10-393d-4ae5-adc9-46bd71d01bf9';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_organisation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4dbc7f10-393d-4ae5-adc9-46bd71d01bf9';
    $display->content['new-4dbc7f10-393d-4ae5-adc9-46bd71d01bf9'] = $pane;
    $display->panels['right'][1] = 'new-4dbc7f10-393d-4ae5-adc9-46bd71d01bf9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1cd58ab2-0a79-4a8b-89b3-dd499afb87df';
  $handler->conf['display'] = $display;
  $export['user_view__my_account'] = $handler;

  return $export;
}
