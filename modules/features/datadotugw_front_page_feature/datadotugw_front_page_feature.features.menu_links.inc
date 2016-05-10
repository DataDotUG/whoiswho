<?php
/**
 * @file
 * datadotugw_front_page_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datadotugw_front_page_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'News Items',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_data:http://catalog.data.ug
  $menu_links['main-menu_data:http://catalog.data.ug'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://catalog.data.ug',
    'router_path' => '',
    'link_title' => 'Data',
    'options' => array(
      'attributes' => array(
        'title' => 'Datasets for Data.Ug',
      ),
      'identifier' => 'main-menu_data:http://catalog.data.ug',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_layers:http://maps.data.ug
  $menu_links['main-menu_layers:http://maps.data.ug'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://maps.data.ug',
    'router_path' => '',
    'link_title' => 'Layers',
    'options' => array(
      'attributes' => array(
        'title' => 'Map layers about Uganda',
      ),
      'identifier' => 'main-menu_layers:http://maps.data.ug',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_maps:http://maps.data.ug',
  );
  // Exported menu link: main-menu_login:user/login
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_maps:http://maps.data.ug
  $menu_links['main-menu_maps:http://maps.data.ug'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://maps.data.ug',
    'router_path' => '',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'title' => 'Maps on Data.Ug',
      ),
      'identifier' => 'main-menu_maps:http://maps.data.ug',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_people:http://maps.data.ug/people
  $menu_links['main-menu_people:http://maps.data.ug/people'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://maps.data.ug/people',
    'router_path' => '',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Map Publishers',
      ),
      'identifier' => 'main-menu_people:http://maps.data.ug/people',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_maps:http://maps.data.ug',
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Data');
  t('Home');
  t('Layers');
  t('Login');
  t('Maps');
  t('People');
  t('User account');

  return $menu_links;
}
