<?php

/**
 * @file
 * template.php
 */

function bukasa_preprocess_field(&$vars) {
  $element = $vars['element'];
  // Modify the output of the taxonomy term field
  if ($element['#field_name'] === 'field_term_quadrants') {
  //  print_r($vars);
  $i = 0;
   foreach ($element['#items'] as $item) {
  // Get the title and description
//    $item = $vars['items'];
    $tid = $item['tid'];
    $term = taxonomy_term_load($tid);

    $acronym = $term->name;
    $description = $term->description;

    $link = '<a href="taxonomy/term/' . $tid . '" title="' .$acronym .'">' . $acronym . '</a>';
    
    switch ($acronym) {
        case 'Own':
            $html = '<div class="quarter-circle-top-right quadrant">' . $link . '</div>';
            break;
        case 'Publish':
            $html = '<div class="quarter-circle-bottom-right quadrant">' . $link . '</div>';
            break;
        case 'Transform':
            $html = '<div class="quarter-circle-bottom-left quadrant">' . $link . '</div>';
            break;
        case 'Interpret':
            $html = '<div class="quarter-circle-top-left quadrant">' . $link . '</div>';
            break;
        default:
            break;
    }
    //now replace the default field markup with your new markup
    $vars['items'][$i]['#markup'] =  $html;
    $i++;
   }
  }
}