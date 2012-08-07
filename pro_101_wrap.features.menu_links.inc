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
    'weight' => '-47',
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
    'weight' => '-48',
  );
  // Exported menu link: shortcut-set-1:admin/config/development/pro-101-qa-checklist
  $menu_links['shortcut-set-1:admin/config/development/pro-101-qa-checklist'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/development/pro-101-qa-checklist',
    'router_path' => 'admin/config/development/pro-101-qa-checklist',
    'link_title' => 'Checklist',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
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
  // Exported menu link: shortcut-set-1:admin/config/search/metatags
  $menu_links['shortcut-set-1:admin/config/search/metatags'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/search/metatags',
    'router_path' => 'admin/config/search/metatags',
    'link_title' => 'Meta Tags',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: shortcut-set-1:admin/config/search/verifications/add
  $menu_links['shortcut-set-1:admin/config/search/verifications/add'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/search/verifications/add',
    'router_path' => 'admin/config/search/verifications/add',
    'link_title' => 'Bing',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: shortcut-set-1:admin/config/search/wordstream
  $menu_links['shortcut-set-1:admin/config/search/wordstream'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/search/wordstream',
    'router_path' => 'admin/config/search/wordstream',
    'link_title' => 'WordStream',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: shortcut-set-1:admin/config/services/alchemy
  $menu_links['shortcut-set-1:admin/config/services/alchemy'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/services/alchemy',
    'router_path' => 'admin/config/services/alchemy',
    'link_title' => 'Alchemy',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: shortcut-set-1:admin/config/services/social_media
  $menu_links['shortcut-set-1:admin/config/services/social_media'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/services/social_media',
    'router_path' => 'admin/config/services/social_media',
    'link_title' => 'Social Media',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Exported menu link: shortcut-set-1:admin/config/system/google-analytics-reports
  $menu_links['shortcut-set-1:admin/config/system/google-analytics-reports'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/system/google-analytics-reports',
    'router_path' => 'admin/config/system/google-analytics-reports',
    'link_title' => 'Analytics Reports',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: shortcut-set-1:admin/config/system/googleanalytics
  $menu_links['shortcut-set-1:admin/config/system/googleanalytics'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/system/googleanalytics',
    'router_path' => 'admin/config/system/googleanalytics',
    'link_title' => 'Analytics',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
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
    'weight' => '-38',
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
    'weight' => '-39',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Alchemy');
  t('Analytics');
  t('Analytics Reports');
  t('Bing');
  t('Checklist');
  t('Facebook');
  t('Find content');
  t('Meta Tags');
  t('Mode');
  t('Mollom');
  t('Social Media');
  t('WordStream');


  return $menu_links;
}
