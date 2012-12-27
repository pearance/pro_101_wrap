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

  // Exported permission: Actions Configuration.
  $permissions['Actions Configuration'] = array(
    'name' => 'Actions Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Admin Index.
  $permissions['Admin Index'] = array(
    'name' => 'Admin Index',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Administration Configuration Menu.
  $permissions['Administration Configuration Menu'] = array(
    'name' => 'Administration Configuration Menu',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Boost Configuration.
  $permissions['Boost Configuration'] = array(
    'name' => 'Boost Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: CS Adaptive Image Configuration.
  $permissions['CS Adaptive Image Configuration'] = array(
    'name' => 'CS Adaptive Image Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Clean URLs Configuration.
  $permissions['Clean URLs Configuration'] = array(
    'name' => 'Clean URLs Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Colorbox Configuration.
  $permissions['Colorbox Configuration'] = array(
    'name' => 'Colorbox Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Configuration Menu.
  $permissions['Configuration Menu'] = array(
    'name' => 'Configuration Menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Content-lock Configuration.
  $permissions['Content-lock Configuration'] = array(
    'name' => 'Content-lock Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Context Configuration.
  $permissions['Context Configuration'] = array(
    'name' => 'Context Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Cron Configuration.
  $permissions['Cron Configuration'] = array(
    'name' => 'Cron Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Custom Error Configuration.
  $permissions['Custom Error Configuration'] = array(
    'name' => 'Custom Error Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Database Log.
  $permissions['Database Log'] = array(
    'name' => 'Database Log',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Devel Configuration.
  $permissions['Devel Configuration'] = array(
    'name' => 'Devel Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Disable Messages Configuration.
  $permissions['Disable Messages Configuration'] = array(
    'name' => 'Disable Messages Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: File-system Configuration.
  $permissions['File-system Configuration'] = array(
    'name' => 'File-system Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: File-types.
  $permissions['File-types'] = array(
    'name' => 'File-types',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Global Redirect Configuration.
  $permissions['Global Redirect Configuration'] = array(
    'name' => 'Global Redirect Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Image Toolkit Configuration.
  $permissions['Image Toolkit Configuration'] = array(
    'name' => 'Image Toolkit Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Insight.
  $permissions['Insight'] = array(
    'name' => 'Insight',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Jail Configuration.
  $permissions['Jail Configuration'] = array(
    'name' => 'Jail Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Live CSS Configuration.
  $permissions['Live CSS Configuration'] = array(
    'name' => 'Live CSS Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Logging Configuration.
  $permissions['Logging Configuration'] = array(
    'name' => 'Logging Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Maintenance Configuration.
  $permissions['Maintenance Configuration'] = array(
    'name' => 'Maintenance Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Media Browser Configuration.
  $permissions['Media Browser Configuration'] = array(
    'name' => 'Media Browser Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: People Configuration Menu.
  $permissions['People Configuration Menu'] = array(
    'name' => 'People Configuration Menu',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Performance Configuration.
  $permissions['Performance Configuration'] = array(
    'name' => 'Performance Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: RSS Configuration.
  $permissions['RSS Configuration'] = array(
    'name' => 'RSS Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Regional Configuration Menu.
  $permissions['Regional Configuration Menu'] = array(
    'name' => 'Regional Configuration Menu',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Site Information Configuration.
  $permissions['Site Information Configuration'] = array(
    'name' => 'Site Information Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Strongarm Configuration.
  $permissions['Strongarm Configuration'] = array(
    'name' => 'Strongarm Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Structure Menu.
  $permissions['Structure Menu'] = array(
    'name' => 'Structure Menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Tadaa Configuration.
  $permissions['Tadaa Configuration'] = array(
    'name' => 'Tadaa Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Top Access Denied.
  $permissions['Top Access Denied'] = array(
    'name' => 'Top Access Denied',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Top Page not Found.
  $permissions['Top Page not Found'] = array(
    'name' => 'Top Page not Found',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: User Interface Configuration Menu.
  $permissions['User Interface Configuration Menu'] = array(
    'name' => 'User Interface Configuration Menu',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Webform Components.
  $permissions['Webform Components'] = array(
    'name' => 'Webform Components',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Webform Configuration.
  $permissions['Webform Configuration'] = array(
    'name' => 'Webform Configuration',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'config_perms',
  );

  // Exported permission: Webform Email Settings.
  $permissions['Webform Email Settings'] = array(
    'name' => 'Webform Email Settings',
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
      1 => 'support',
    ),
    'module' => 'wordstream',
  );

  // Exported permission: admin wordstream.
  $permissions['admin wordstream'] = array(
    'name' => 'admin wordstream',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
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
      1 => 'support',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: kwresearch admin site keywords.
  $permissions['kwresearch admin site keywords'] = array(
    'name' => 'kwresearch admin site keywords',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to published.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from published to unpublished.
  $permissions['moderate content from published to unpublished'] = array(
    'name' => 'moderate content from published to unpublished',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from unpublished to draft.
  $permissions['moderate content from unpublished to draft'] = array(
    'name' => 'moderate content from unpublished to draft',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from unpublished to needs_review.
  $permissions['moderate content from unpublished to needs_review'] = array(
    'name' => 'moderate content from unpublished to needs_review',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: use ccl.
  $permissions['use ccl'] = array(
    'name' => 'use ccl',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'ccl',
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
      1 => 'support',
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
