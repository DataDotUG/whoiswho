<?php
/**
 * @file
 * datadotug_feeds_importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function datadotug_feeds_importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'datadotug_all_organisations-id-rewrite';
  $feeds_tamper->importer = 'datadotug_all_organisations';
  $feeds_tamper->source = 'id';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'http://catalog.data.ug/api/3/action/organization_show?id=[id]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['datadotug_all_organisations-id-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_askyourgov_organisations-url_name-sprintf';
  $feeds_tamper->importer = 'import_askyourgov_organisations';
  $feeds_tamper->source = 'URL name';
  $feeds_tamper->plugin_id = 'sprintf';
  $feeds_tamper->settings = array(
    'format' => 'http://askyourgov.ug/feed/body/%s',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format string';
  $export['import_askyourgov_organisations-url_name-sprintf'] = $feeds_tamper;

  return $export;
}
