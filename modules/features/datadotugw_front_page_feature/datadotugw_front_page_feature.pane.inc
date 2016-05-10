<?php
/**
 * @file
 * datadotugw_front_page_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function datadotugw_front_page_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_intro';
  $template->title = '';
  $template->plugin = 'text';
  $template->description = 'Welcome text on Homepage';
  $template->configuration = '';
  $export['homepage_intro'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function datadotugw_front_page_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_intro_und';
  $template->container = 'homepage_intro';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<h2>The home of Uganda\'s Open Data</h2>

Here you will find data, tools, design data visualizations and resources to conduct your research.',
    'format' => 'full_html',
    'title' => '<none>',
  );
  $export['homepage_intro_und'] = $template;

  return $export;
}
