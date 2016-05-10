<?php
/**
 * @file
 * datadotugw_front_page_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function datadotugw_front_page_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = 'This is the about page';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'menu-content',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'About',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '08f24a37-ebb3-4c57-9a85-51c4c72aa576';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-401e8995-abfd-47ca-be3a-85c31e987f75';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'about_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '401e8995-abfd-47ca-be3a-85c31e987f75';
    $display->content['new-401e8995-abfd-47ca-be3a-85c31e987f75'] = $pane;
    $display->panels['middle'][0] = 'new-401e8995-abfd-47ca-be3a-85c31e987f75';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-401e8995-abfd-47ca-be3a-85c31e987f75';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'homepage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Main Panel',
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
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left_above' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
    'left_above' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '02c93f4a-354b-43d8-83df-42064dae301e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79d401bf-78c2-4304-bb21-da32e6f0d88d';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'organisations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'featuredblock',
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
    $pane->uuid = '79d401bf-78c2-4304-bb21-da32e6f0d88d';
    $display->content['new-79d401bf-78c2-4304-bb21-da32e6f0d88d'] = $pane;
    $display->panels['bottom'][0] = 'new-79d401bf-78c2-4304-bb21-da32e6f0d88d';
    $pane = new stdClass();
    $pane->pid = 'new-d8112d0d-77e6-4c96-898f-c56839d08f2c';
    $pane->panel = 'left_above';
    $pane->type = 'views';
    $pane->subtype = 'frontpage_counters';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'simpletotalblock',
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
    $pane->uuid = 'd8112d0d-77e6-4c96-898f-c56839d08f2c';
    $display->content['new-d8112d0d-77e6-4c96-898f-c56839d08f2c'] = $pane;
    $display->panels['left_above'][0] = 'new-d8112d0d-77e6-4c96-898f-c56839d08f2c';
    $pane = new stdClass();
    $pane->pid = 'new-5fcad7af-82ef-4db1-8f6f-7369d31b3dad';
    $pane->panel = 'left_above';
    $pane->type = 'views';
    $pane->subtype = 'frontpage_counters';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = '5fcad7af-82ef-4db1-8f6f-7369d31b3dad';
    $display->content['new-5fcad7af-82ef-4db1-8f6f-7369d31b3dad'] = $pane;
    $display->panels['left_above'][1] = 'new-5fcad7af-82ef-4db1-8f6f-7369d31b3dad';
    $pane = new stdClass();
    $pane->pid = 'new-34223642-c305-4b9b-bea7-c617d88cfe41';
    $pane->panel = 'left_above';
    $pane->type = 'views';
    $pane->subtype = 'frontpage_node_counters';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '34223642-c305-4b9b-bea7-c617d88cfe41';
    $display->content['new-34223642-c305-4b9b-bea7-c617d88cfe41'] = $pane;
    $display->panels['left_above'][2] = 'new-34223642-c305-4b9b-bea7-c617d88cfe41';
    $pane = new stdClass();
    $pane->pid = 'new-2c2b344c-dad4-4441-a6dd-8c474f2aaa6c';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'news_blog_pages_and_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'frontblock',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:well',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c2b344c-dad4-4441-a6dd-8c474f2aaa6c';
    $display->content['new-2c2b344c-dad4-4441-a6dd-8c474f2aaa6c'] = $pane;
    $display->panels['middle'][0] = 'new-2c2b344c-dad4-4441-a6dd-8c474f2aaa6c';
    $pane = new stdClass();
    $pane->pid = 'new-04c900c6-0819-4dde-a2a5-6fe8b9f3886a';
    $pane->panel = 'right_above';
    $pane->type = 'views';
    $pane->subtype = 'frontpage_per_quadrant';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '04c900c6-0819-4dde-a2a5-6fe8b9f3886a';
    $display->content['new-04c900c6-0819-4dde-a2a5-6fe8b9f3886a'] = $pane;
    $display->panels['right_above'][0] = 'new-04c900c6-0819-4dde-a2a5-6fe8b9f3886a';
    $pane = new stdClass();
    $pane->pid = 'new-c1ecc116-ab9e-4078-8205-640d82f867a4';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
      'override_title' => 1,
      'override_title_text' => 'We are the custodians of Ugandan Open Data',
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
    $pane->uuid = 'c1ecc116-ab9e-4078-8205-640d82f867a4';
    $display->content['new-c1ecc116-ab9e-4078-8205-640d82f867a4'] = $pane;
    $display->panels['top'][0] = 'new-c1ecc116-ab9e-4078-8205-640d82f867a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
