<?php
/**
 * @file
 * datadotug_user_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function datadotug_user_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '1',
    'children' => array(
      0 => 'account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Account',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-account field-group-fieldset',
        'description' => 'This is your account information that you use to login to DatadotUg',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datadotug|user|user|form';
  $field_group->group_name = 'group_datadotug';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => 'DatadotUg',
    'weight' => '-16',
    'children' => array(
      0 => 'field_organisation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'DatadotUg',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-datadotug field-group-fieldset',
        'description' => 'Who are you in the Open Data community? Tell us!',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_datadotug|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_surname',
      2 => 'picture',
      3 => 'field_bio',
      4 => 'group_datadotug',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-personal field-group-fieldset',
        'description' => 'Tell us a little bit about yourself. This will greatly help other people in the Open Data community to find you.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_personal|user|user|form'] = $field_group;

  return $export;
}
