<?php
/**
 * @file
 * pro_101_wrap.config_perms.inc
 */

/**
 * Implements hook_config_perms().
 */
function pro_101_wrap_config_perms() {
  $export = array();

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_clean_urls';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer clean-urls';
  $config_perms->path = array(
    0 => 'admin/config/search/clean-urls',
  );
  $export['administer_clean_urls'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_content_node_settings';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer content node settings';
  $config_perms->path = array(
    0 => 'admin/content/node-settings',
  );
  $export['administer_content_node_settings'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_date_time';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer date-time';
  $config_perms->path = array(
    0 => 'admin/config/regional/date-time',
    1 => 'admin/config/regional/date-time/*',
  );
  $export['administer_date_time'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_error_reporting';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer error reporting';
  $config_perms->path = array(
    0 => 'admin/config/error-reporting',
  );
  $export['administer_error_reporting'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_file_system';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer file system';
  $config_perms->path = array(
    0 => 'admin/config/file-system',
  );
  $export['administer_file_system'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_modules';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer modules';
  $config_perms->path = array(
    0 => 'admin/modules',
    1 => 'admin/modules/list/confirm',
    2 => 'admin/modules/uninstall',
    3 => 'admin/modules/uninstall/confirm',
  );
  $export['administer_modules'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_performance';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer performance';
  $config_perms->path = array(
    0 => 'admin/config/development/performance',
  );
  $export['administer_performance'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_site_information';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer site information';
  $config_perms->path = array(
    0 => 'admin/config/system/site-information',
  );
  $export['administer_site_information'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_site_maintenance';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer site maintenance';
  $config_perms->path = array(
    0 => 'admin/config/development/maintenance',
  );
  $export['administer_site_maintenance'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_user_profile_fields';
  $config_perms->status = TRUE;
  $config_perms->name = 'administer user profile fields';
  $config_perms->path = array(
    0 => 'admin/user/profile',
  );
  $export['administer_user_profile_fields'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_admin_index';
  $config_perms->status = TRUE;
  $config_perms->name = 'display admin index';
  $config_perms->path = array(
    0 => 'admin/index',
  );
  $export['display_admin_index'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_site_building_menu';
  $config_perms->status = TRUE;
  $config_perms->name = 'display site building menu';
  $config_perms->path = array(
    0 => 'admin/structure',
  );
  $export['display_site_building_menu'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_site_configuration_menu';
  $config_perms->status = TRUE;
  $config_perms->name = 'display site configuration menu';
  $config_perms->path = array(
    0 => 'admin/config',
  );
  $export['display_site_configuration_menu'] = $config_perms;

  return $export;
}
