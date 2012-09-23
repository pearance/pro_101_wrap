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

  // Exported permission: Mollom Configuration.
  $permissions['Mollom Configuration'] = array(
    'name' => 'Mollom Configuration',
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

  // Exported permission: access the block administration page.
  $permissions['access the block administration page'] = array(
    'name' => 'access the block administration page',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
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

  // Exported permission: administer block access settings.
  $permissions['administer block access settings'] = array(
    'name' => 'administer block access settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
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

  // Exported permission: configure all block body fields.
  $permissions['configure all block body fields'] = array(
    'name' => 'configure all block body fields',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all block descriptions.
  $permissions['configure all block descriptions'] = array(
    'name' => 'configure all block descriptions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all block titles.
  $permissions['configure all block titles'] = array(
    'name' => 'configure all block titles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all content type visibility settings.
  $permissions['configure all content type visibility settings'] = array(
    'name' => 'configure all content type visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all language settings.
  $permissions['configure all language settings'] = array(
    'name' => 'configure all language settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all page visibility settings.
  $permissions['configure all page visibility settings'] = array(
    'name' => 'configure all page visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all region settings.
  $permissions['configure all region settings'] = array(
    'name' => 'configure all region settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all role visibility settings.
  $permissions['configure all role visibility settings'] = array(
    'name' => 'configure all role visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all user visibility settings.
  $permissions['configure all user visibility settings'] = array(
    'name' => 'configure all user visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all visibility settings.
  $permissions['configure all visibility settings'] = array(
    'name' => 'configure all visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: create blocks.
  $permissions['create blocks'] = array(
    'name' => 'create blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: create field_bio_summary.
  $permissions['create field_bio_summary'] = array(
    'name' => 'create field_bio_summary',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_blog_tags.
  $permissions['create field_blog_tags'] = array(
    'name' => 'create field_blog_tags',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_first_name.
  $permissions['create field_first_name'] = array(
    'name' => 'create field_first_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_hide_profile.
  $permissions['create field_hide_profile'] = array(
    'name' => 'create field_hide_profile',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_last_name.
  $permissions['create field_last_name'] = array(
    'name' => 'create field_last_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_pro_bio.
  $permissions['create field_pro_bio'] = array(
    'name' => 'create field_pro_bio',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_title.
  $permissions['create field_title'] = array(
    'name' => 'create field_title',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_title_graphic.
  $permissions['create field_title_graphic'] = array(
    'name' => 'create field_title_graphic',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete all blocks.
  $permissions['delete all blocks'] = array(
    'name' => 'delete all blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: disable all blocks.
  $permissions['disable all blocks'] = array(
    'name' => 'disable all blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: edit any checklistapi checklist.
  $permissions['edit any checklistapi checklist'] = array(
    'name' => 'edit any checklistapi checklist',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: edit field_bio_summary.
  $permissions['edit field_bio_summary'] = array(
    'name' => 'edit field_bio_summary',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_blog_tags.
  $permissions['edit field_blog_tags'] = array(
    'name' => 'edit field_blog_tags',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_first_name.
  $permissions['edit field_first_name'] = array(
    'name' => 'edit field_first_name',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_hide_profile.
  $permissions['edit field_hide_profile'] = array(
    'name' => 'edit field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_last_name.
  $permissions['edit field_last_name'] = array(
    'name' => 'edit field_last_name',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_pro_bio.
  $permissions['edit field_pro_bio'] = array(
    'name' => 'edit field_pro_bio',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_title.
  $permissions['edit field_title'] = array(
    'name' => 'edit field_title',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_title_graphic.
  $permissions['edit field_title_graphic'] = array(
    'name' => 'edit field_title_graphic',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_bio_summary.
  $permissions['edit own field_bio_summary'] = array(
    'name' => 'edit own field_bio_summary',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_blog_tags.
  $permissions['edit own field_blog_tags'] = array(
    'name' => 'edit own field_blog_tags',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_first_name.
  $permissions['edit own field_first_name'] = array(
    'name' => 'edit own field_first_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_hide_profile.
  $permissions['edit own field_hide_profile'] = array(
    'name' => 'edit own field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_last_name.
  $permissions['edit own field_last_name'] = array(
    'name' => 'edit own field_last_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_pro_bio.
  $permissions['edit own field_pro_bio'] = array(
    'name' => 'edit own field_pro_bio',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_title.
  $permissions['edit own field_title'] = array(
    'name' => 'edit own field_title',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_title_graphic.
  $permissions['edit own field_title_graphic'] = array(
    'name' => 'edit own field_title_graphic',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: enable all blocks.
  $permissions['enable all blocks'] = array(
    'name' => 'enable all blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: enter block revision log entry.
  $permissions['enter block revision log entry'] = array(
    'name' => 'enter block revision log entry',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter blog revision log entry.
  $permissions['enter blog revision log entry'] = array(
    'name' => 'enter blog revision log entry',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter faq revision log entry.
  $permissions['enter faq revision log entry'] = array(
    'name' => 'enter faq revision log entry',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter featured revision log entry.
  $permissions['enter featured revision log entry'] = array(
    'name' => 'enter featured revision log entry',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter page revision log entry.
  $permissions['enter page revision log entry'] = array(
    'name' => 'enter page revision log entry',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter specialty revision log entry.
  $permissions['enter specialty revision log entry'] = array(
    'name' => 'enter specialty revision log entry',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter testimonial revision log entry.
  $permissions['enter testimonial revision log entry'] = array(
    'name' => 'enter testimonial revision log entry',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter webform revision log entry.
  $permissions['enter webform revision log entry'] = array(
    'name' => 'enter webform revision log entry',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
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

  // Exported permission: moderate content from draft to trash.
  $permissions['moderate content from draft to trash'] = array(
    'name' => 'moderate content from draft to trash',
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

  // Exported permission: moderate content from trash to draft.
  $permissions['moderate content from trash to draft'] = array(
    'name' => 'moderate content from trash to draft',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from trash to needs_review.
  $permissions['moderate content from trash to needs_review'] = array(
    'name' => 'moderate content from trash to needs_review',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from trash to published.
  $permissions['moderate content from trash to published'] = array(
    'name' => 'moderate content from trash to published',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
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

  // Exported permission: moderate content from unpublished to trash.
  $permissions['moderate content from unpublished to trash'] = array(
    'name' => 'moderate content from unpublished to trash',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: move all blocks.
  $permissions['move all blocks'] = array(
    'name' => 'move all blocks',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'block_access',
  );

  // Exported permission: override block authored by option.
  $permissions['override block authored by option'] = array(
    'name' => 'override block authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block authored on option.
  $permissions['override block authored on option'] = array(
    'name' => 'override block authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block promote to front page option.
  $permissions['override block promote to front page option'] = array(
    'name' => 'override block promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block published option.
  $permissions['override block published option'] = array(
    'name' => 'override block published option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block revision option.
  $permissions['override block revision option'] = array(
    'name' => 'override block revision option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block sticky option.
  $permissions['override block sticky option'] = array(
    'name' => 'override block sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog authored by option.
  $permissions['override blog authored by option'] = array(
    'name' => 'override blog authored by option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog authored on option.
  $permissions['override blog authored on option'] = array(
    'name' => 'override blog authored on option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog promote to front page option.
  $permissions['override blog promote to front page option'] = array(
    'name' => 'override blog promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog published option.
  $permissions['override blog published option'] = array(
    'name' => 'override blog published option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog revision option.
  $permissions['override blog revision option'] = array(
    'name' => 'override blog revision option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog sticky option.
  $permissions['override blog sticky option'] = array(
    'name' => 'override blog sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq authored by option.
  $permissions['override faq authored by option'] = array(
    'name' => 'override faq authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq authored on option.
  $permissions['override faq authored on option'] = array(
    'name' => 'override faq authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq promote to front page option.
  $permissions['override faq promote to front page option'] = array(
    'name' => 'override faq promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq published option.
  $permissions['override faq published option'] = array(
    'name' => 'override faq published option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq revision option.
  $permissions['override faq revision option'] = array(
    'name' => 'override faq revision option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq sticky option.
  $permissions['override faq sticky option'] = array(
    'name' => 'override faq sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured authored by option.
  $permissions['override featured authored by option'] = array(
    'name' => 'override featured authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured authored on option.
  $permissions['override featured authored on option'] = array(
    'name' => 'override featured authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured promote to front page option.
  $permissions['override featured promote to front page option'] = array(
    'name' => 'override featured promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured published option.
  $permissions['override featured published option'] = array(
    'name' => 'override featured published option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured revision option.
  $permissions['override featured revision option'] = array(
    'name' => 'override featured revision option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured sticky option.
  $permissions['override featured sticky option'] = array(
    'name' => 'override featured sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page authored by option.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page authored on option.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page promote to front page option.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page published option.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page revision option.
  $permissions['override page revision option'] = array(
    'name' => 'override page revision option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page sticky option.
  $permissions['override page sticky option'] = array(
    'name' => 'override page sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty authored by option.
  $permissions['override specialty authored by option'] = array(
    'name' => 'override specialty authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty authored on option.
  $permissions['override specialty authored on option'] = array(
    'name' => 'override specialty authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty promote to front page option.
  $permissions['override specialty promote to front page option'] = array(
    'name' => 'override specialty promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty published option.
  $permissions['override specialty published option'] = array(
    'name' => 'override specialty published option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty revision option.
  $permissions['override specialty revision option'] = array(
    'name' => 'override specialty revision option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty sticky option.
  $permissions['override specialty sticky option'] = array(
    'name' => 'override specialty sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override testimonial authored by option.
  $permissions['override testimonial authored by option'] = array(
    'name' => 'override testimonial authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override testimonial authored on option.
  $permissions['override testimonial authored on option'] = array(
    'name' => 'override testimonial authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override testimonial promote to front page option.
  $permissions['override testimonial promote to front page option'] = array(
    'name' => 'override testimonial promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override testimonial published option.
  $permissions['override testimonial published option'] = array(
    'name' => 'override testimonial published option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override testimonial revision option.
  $permissions['override testimonial revision option'] = array(
    'name' => 'override testimonial revision option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override testimonial sticky option.
  $permissions['override testimonial sticky option'] = array(
    'name' => 'override testimonial sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform authored by option.
  $permissions['override webform authored by option'] = array(
    'name' => 'override webform authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform authored on option.
  $permissions['override webform authored on option'] = array(
    'name' => 'override webform authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform promote to front page option.
  $permissions['override webform promote to front page option'] = array(
    'name' => 'override webform promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform published option.
  $permissions['override webform published option'] = array(
    'name' => 'override webform published option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform revision option.
  $permissions['override webform revision option'] = array(
    'name' => 'override webform revision option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform sticky option.
  $permissions['override webform sticky option'] = array(
    'name' => 'override webform sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
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

  // Exported permission: view all blocks.
  $permissions['view all blocks'] = array(
    'name' => 'view all blocks',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'block_access',
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

  // Exported permission: view field_bio_summary.
  $permissions['view field_bio_summary'] = array(
    'name' => 'view field_bio_summary',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_blog_tags.
  $permissions['view field_blog_tags'] = array(
    'name' => 'view field_blog_tags',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_first_name.
  $permissions['view field_first_name'] = array(
    'name' => 'view field_first_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_hide_profile.
  $permissions['view field_hide_profile'] = array(
    'name' => 'view field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_last_name.
  $permissions['view field_last_name'] = array(
    'name' => 'view field_last_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_pro_bio.
  $permissions['view field_pro_bio'] = array(
    'name' => 'view field_pro_bio',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_title.
  $permissions['view field_title'] = array(
    'name' => 'view field_title',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_title_graphic.
  $permissions['view field_title_graphic'] = array(
    'name' => 'view field_title_graphic',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_bio_summary.
  $permissions['view own field_bio_summary'] = array(
    'name' => 'view own field_bio_summary',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_blog_tags.
  $permissions['view own field_blog_tags'] = array(
    'name' => 'view own field_blog_tags',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_first_name.
  $permissions['view own field_first_name'] = array(
    'name' => 'view own field_first_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_hide_profile.
  $permissions['view own field_hide_profile'] = array(
    'name' => 'view own field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_last_name.
  $permissions['view own field_last_name'] = array(
    'name' => 'view own field_last_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_pro_bio.
  $permissions['view own field_pro_bio'] = array(
    'name' => 'view own field_pro_bio',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_title.
  $permissions['view own field_title'] = array(
    'name' => 'view own field_title',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_title_graphic.
  $permissions['view own field_title_graphic'] = array(
    'name' => 'view own field_title_graphic',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
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
