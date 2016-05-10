<?php
/**
 * @file
 * datadotugw_front_page_feature.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function datadotugw_front_page_feature_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'about_text';
  $content->admin_title = 'About Text';
  $content->admin_description = 'The text on the about page';
  $content->category = 'Static Content';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'About',
    'body' => 'This is Open Data about Uganda. As much as we can find. We are actively maintaining the links to the data. Data dot UG does not itself generate or publishdata. All data is coming from other resources than us. We do our utmost best to get the original publishers of the data we find actively involved if users of our data want to engage with them.',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['about_text'] = $content;

  return $export;
}
