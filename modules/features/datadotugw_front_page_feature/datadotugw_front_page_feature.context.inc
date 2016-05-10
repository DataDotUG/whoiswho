<?php
/**
 * @file
 * datadotugw_front_page_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datadotugw_front_page_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_all_pages';
  $context->description = 'Things that are on every page (like the footer)';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'twitter_block-1' => array(
          'module' => 'twitter_block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'social_media_links-social-media-links' => array(
          'module' => 'social_media_links',
          'delta' => 'social-media-links',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Things that are on every page (like the footer)');
  t('wwwdu');
  $export['wwwdu_all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_book_pages';
  $context->description = 'Layout for Book Pages';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout for Book Pages');
  t('wwwdu');
  $export['wwwdu_book_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_home_pages';
  $context->description = '';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pane-homepage_intro' => array(
          'module' => 'pane',
          'delta' => 'homepage_intro',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'ckan_search-ckan_search_block' => array(
          'module' => 'ckan_search',
          'delta' => 'ckan_search_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-blog_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-event-block_2' => array(
          'module' => 'views',
          'delta' => 'event-block_2',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('wwwdu');
  $export['wwwdu_home_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_not_homepage';
  $context->description = 'Shows things that are on all pages but the homepage';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~profile' => '~profile',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pcp-pcp_profile_percent_complete' => array(
          'module' => 'pcp',
          'delta' => 'pcp_profile_percent_complete',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows things that are on all pages but the homepage');
  t('wwwdu');
  $export['wwwdu_not_homepage'] = $context;

  return $export;
}
