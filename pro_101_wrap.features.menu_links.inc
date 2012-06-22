<?php
/**
 * @file
 * pro_101_wrap.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pro_101_wrap_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: shortcut-set-1:admin/config/content/facebook-comments
  $menu_links['shortcut-set-1:admin/config/content/facebook-comments'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/content/facebook-comments',
    'router_path' => 'admin/config/content/facebook-comments',
    'link_title' => 'Facebook',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: shortcut-set-1:admin/config/content/mollom/settings
  $menu_links['shortcut-set-1:admin/config/content/mollom/settings'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/content/mollom/settings',
    'router_path' => 'admin/config/content/mollom/settings',
    'link_title' => 'Mollom',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: shortcut-set-1:admin/config/development/tadaa/status/environments
  $menu_links['shortcut-set-1:admin/config/development/tadaa/status/environments'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/development/tadaa/status/environments',
    'router_path' => 'admin/config/development/tadaa/status/environments',
    'link_title' => 'Mode',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: shortcut-set-1:admin/content
  $menu_links['shortcut-set-1:admin/content'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Find content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: shortcut-set-1:node/add
  $menu_links['shortcut-set-1:node/add'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Facebook');
  t('Find content');
  t('Mode');
  t('Mollom');


  return $menu_links;
}
