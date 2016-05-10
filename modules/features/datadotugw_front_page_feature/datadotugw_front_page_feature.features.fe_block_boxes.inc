<?php
/**
 * @file
 * datadotugw_front_page_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function datadotugw_front_page_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Data dot ug google group discussions';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'google_group_forum';
  $fe_block_boxes->body = '<iframe id="forum_embed"
 src="javascript:void(0)"
 scrolling="no"
 frameborder="0"
 width="100%"
 height="700">
</iframe>

<script type="text/javascript">
 document.getElementById("forum_embed").src =
  "https://groups.google.com/forum/embed/?place=forum/data-dot-ug"
  "&showsearch=true&showpopout=true&showtabs=false#!forum/data-dot-ug" +
  encodeURIComponent(window.location.href);
</script>';

  $export['google_group_forum'] = $fe_block_boxes;

  return $export;
}
