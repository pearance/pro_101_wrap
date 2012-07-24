<?php
/**
 * @file
 * pro_101_wrap.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_wrap_user_default_permissions() {
  $permissions = array();

  // Exported permission: access wordstream reports.
  $permissions['access wordstream reports'] = array(
    'name' => 'access wordstream reports',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'wordstream',
  );

  // Exported permission: admin wordstream.
  $permissions['admin wordstream'] = array(
    'name' => 'admin wordstream',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'wordstream',
  );

  // Exported permission: administer Insight.
  $permissions['administer Insight'] = array(
    'name' => 'administer Insight',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: administer clean-urls.
  $permissions['administer clean-urls'] = array(
    'name' => 'administer clean-urls',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer content node settings.
  $permissions['administer content node settings'] = array(
    'name' => 'administer content node settings',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer custom permissions.
  $permissions['administer custom permissions'] = array(
    'name' => 'administer custom permissions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer date-time.
  $permissions['administer date-time'] = array(
    'name' => 'administer date-time',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer error reporting.
  $permissions['administer error reporting'] = array(
    'name' => 'administer error reporting',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer file system.
  $permissions['administer file system'] = array(
    'name' => 'administer file system',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer performance.
  $permissions['administer performance'] = array(
    'name' => 'administer performance',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site information.
  $permissions['administer site information'] = array(
    'name' => 'administer site information',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer site maintenance.
  $permissions['administer site maintenance'] = array(
    'name' => 'administer site maintenance',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: administer user profile fields.
  $permissions['administer user profile fields'] = array(
    'name' => 'administer user profile fields',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: display admin index.
  $permissions['display admin index'] = array(
    'name' => 'display admin index',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: display site building menu.
  $permissions['display site building menu'] = array(
    'name' => 'display site building menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: display site configuration menu.
  $permissions['display site configuration menu'] = array(
    'name' => 'display site configuration menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: kwresearch admin page keywords.
  $permissions['kwresearch admin page keywords'] = array(
    'name' => 'kwresearch admin page keywords',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: kwresearch admin site keywords.
  $permissions['kwresearch admin site keywords'] = array(
    'name' => 'kwresearch admin site keywords',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'shortcut',
  );

  return $permissions;
}
