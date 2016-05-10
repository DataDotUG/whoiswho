<?php
/**
 * @file
 * datadotug_user_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function datadotug_user_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_apps'
  $field_instances['user-user-field_apps'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => -5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_apps',
    'label' => 'Apps',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_extrawidgets',
      'settings' => array(),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For example: John or Annie',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -20,
    ),
  );

  // Exported field_instance: 'user-user-field_organisation'
  $field_instances['user-user-field_organisation'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Eh, at least be a member of DatadotUg!',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => -20,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organisation',
    'label' => 'Organisations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -17,
    ),
  );

  // Exported field_instance: 'user-user-field_quadrants'
  $field_instances['user-user-field_quadrants'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In which Quadrants of the Circle of Open Data are you active? This helps other people find you.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => 1,
          'taxonomy_term_separator' => ' ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => -15,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_quadrants',
    'label' => 'Quadrants',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -18,
    ),
  );

  // Exported field_instance: 'user-user-field_surname'
  $field_instances['user-user-field_surname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your family name',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_surname',
    'label' => 'Surname',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -19,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Apps');
  t('Eh, at least be a member of DatadotUg!');
  t('First Name');
  t('For example: John or Annie');
  t('In which Quadrants of the Circle of Open Data are you active? This helps other people find you.');
  t('Organisations');
  t('Quadrants');
  t('Surname');
  t('Your family name');

  return $field_instances;
}
