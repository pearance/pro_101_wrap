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

  // Exported permission: Administer Insight.
  $permissions['Administer Insight'] = array(
    'name' => 'Administer Insight',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer clean-urls.
  $permissions['Administer clean-urls'] = array(
    'name' => 'Administer clean-urls',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer content node settings.
  $permissions['Administer content node settings'] = array(
    'name' => 'Administer content node settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer date-time.
  $permissions['Administer date-time'] = array(
    'name' => 'Administer date-time',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer error reporting.
  $permissions['Administer error reporting'] = array(
    'name' => 'Administer error reporting',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer file system.
  $permissions['Administer file system'] = array(
    'name' => 'Administer file system',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer file-types.
  $permissions['Administer file-types'] = array(
    'name' => 'Administer file-types',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer modules.
  $permissions['Administer modules'] = array(
    'name' => 'Administer modules',
    'roles' => array(),
    'module' => 'config_perms',
  );

  // Exported permission: Administer performance.
  $permissions['Administer performance'] = array(
    'name' => 'Administer performance',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer site information.
  $permissions['Administer site information'] = array(
    'name' => 'Administer site information',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer site maintenance.
  $permissions['Administer site maintenance'] = array(
    'name' => 'Administer site maintenance',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administer user profile fields.
  $permissions['Administer user profile fields'] = array(
    'name' => 'Administer user profile fields',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Display admin index.
  $permissions['Display admin index'] = array(
    'name' => 'Display admin index',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Display site building menu.
  $permissions['Display site building menu'] = array(
    'name' => 'Display site building menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Display site configuration menu.
  $permissions['Display site configuration menu'] = array(
    'name' => 'Display site configuration menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

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

  // Exported permission: administer custom permissions.
  $permissions['administer custom permissions'] = array(
    'name' => 'administer custom permissions',
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

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: edit any checklistapi checklist.
  $permissions['edit any checklistapi checklist'] = array(
    'name' => 'edit any checklistapi checklist',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: edit pro_101_qa_checklist checklistapi checklist.
  $permissions['edit pro_101_qa_checklist checklistapi checklist'] = array(
    'name' => 'edit pro_101_qa_checklist checklistapi checklist',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'checklistapi',
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

  // Exported permission: view any checklistapi checklist.
  $permissions['view any checklistapi checklist'] = array(
    'name' => 'view any checklistapi checklist',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view checklistapi checklists report.
  $permissions['view checklistapi checklists report'] = array(
    'name' => 'view checklistapi checklists report',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view pro_101_qa_checklist checklistapi checklist.
  $permissions['view pro_101_qa_checklist checklistapi checklist'] = array(
    'name' => 'view pro_101_qa_checklist checklistapi checklist',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'checklistapi',
  );

  return $permissions;
}
