<?php
/**
 * @file
 * datadotug_feeds_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function datadotug_feeds_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'askyourgov_organisation_requests';
  $feeds_importer->config = array(
    'name' => 'AskYourGov Organisation Requests',
    'description' => 'Imports all requests per Organisation',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'parent:nid',
            'target' => 'field_organisation:etid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
      ),
    ),
    'content_type' => 'organisation',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['askyourgov_organisation_requests'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'datadotug_all_organisations';
  $feeds_importer->config = array(
    'name' => 'DatadotUG All Organisations',
    'description' => 'Loads all Organisations from CKAN',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'name' => array(
            'name' => 'Name',
            'value' => 'display_name',
            'debug' => 0,
            'weight' => '1',
          ),
          'body' => array(
            'name' => 'Body',
            'value' => 'description',
            'debug' => 0,
            'weight' => '2',
          ),
          'image' => array(
            'name' => 'Image',
            'value' => 'image_display_url',
            'debug' => 0,
            'weight' => '3',
          ),
          'id' => array(
            'name' => 'Id',
            'value' => 'id',
            'debug' => 0,
            'weight' => '4',
          ),
        ),
        'context' => array(
          'value' => '$.result[*]',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'image',
            'target' => 'field_logo',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'id',
            'target' => 'feeds_source',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'organisation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '2419200',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['datadotug_all_organisations'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'datadotug_datasets_from_organisation';
  $feeds_importer->config = array(
    'name' => 'DatadotUG Datasets from Organisation',
    'description' => 'Loads all dataset links when an organisation is loaded',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'source_required' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'context' => array(
          'value' => '$.result.packages[*]',
        ),
        'sources' => array(
          'id' => array(
            'name' => 'Id',
            'value' => 'id',
            'debug' => 1,
            'weight' => '1',
          ),
          'maintainer_email' => array(
            'name' => 'maintainer_email',
            'value' => 'maintainer_email',
            'debug' => 1,
            'weight' => '2',
          ),
          'updated' => array(
            'name' => 'Updated',
            'value' => 'metadata_modified',
            'debug' => 1,
            'weight' => '3',
          ),
          'tags' => array(
            'name' => 'Tags',
            'value' => 'tags[*].display_name',
            'debug' => 1,
            'weight' => '4',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => 'title',
            'debug' => 1,
            'weight' => '5',
          ),
          'body' => array(
            'name' => 'Body',
            'value' => 'notes',
            'debug' => 1,
            'weight' => '6',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'tags',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'parent:nid',
            'target' => 'field_organisation:etid',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'maintainer_email',
            'target' => 'user_mail',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'dataset',
      ),
    ),
    'content_type' => 'organisation',
    'update' => 0,
    'import_period' => '604800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['datadotug_datasets_from_organisation'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_askyourgov_organisations';
  $feeds_importer->config = array(
    'name' => 'Import AskYourGov Organisations',
    'description' => 'Imports the csv file from askyourgov',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Notes',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Created at',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Home page',
            'target' => 'url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'URL name',
            'target' => 'feeds_source',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'organisation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_askyourgov_organisations'] = $feeds_importer;

  return $export;
}
