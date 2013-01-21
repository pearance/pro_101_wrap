<?php
/**
 * @file
 * pro_101_wrap.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_wrap_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'insight_contentanalysis_autorun_analyzers';
  $strongarm->value = array(
    'seo' => 'seo',
    'insight_content' => 0,
  );
  $export['insight_contentanalysis_autorun_analyzers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'insight_contentanalysis_autorun_on_cron';
  $strongarm->value = 1;
  $export['insight_contentanalysis_autorun_on_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'insight_contentanalysis_autorun_on_nodesave';
  $strongarm->value = 0;
  $export['insight_contentanalysis_autorun_on_nodesave'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kwresearch_keyword_sync_vocabulary';
  $strongarm->value = '0';
  $export['kwresearch_keyword_sync_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kwresearch_keyword_tag_vocabulary';
  $strongarm->value = '0';
  $export['kwresearch_keyword_tag_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kwresearch_report_vocabulary';
  $strongarm->value = array(
    2 => '2',
    1 => 0,
  );
  $export['kwresearch_report_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kwresearch_site_report_data_options';
  $strongarm->value = array(
    'daily_volume' => 'daily_volume',
    'google_dailyest' => 'google_dailyest',
    'yahoo_dailyest' => 'yahoo_dailyest',
    'bing_dailyest' => 'bing_dailyest',
    'competition' => 0,
    'bid' => 0,
  );
  $export['kwresearch_site_report_data_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kwresearch_stats_report_data_options';
  $strongarm->value = array(
    'site_priority' => 'site_priority',
    'site_value' => 'site_value',
    'total_dailyest' => 'total_dailyest',
    'competition' => 'competition',
    'bid' => 0,
    'google_dailyest' => 0,
    'yahoo_dailyest' => 0,
    'bing_dailyest' => 0,
    'google_searches' => 0,
    'google_competition' => 0,
    'google_bid' => 0,
    'wordstream_searches' => 0,
  );
  $export['kwresearch_stats_report_data_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kwresearch_stats_report_item_limit';
  $strongarm->value = '50';
  $export['kwresearch_stats_report_item_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kwresearch_stats_report_links_options';
  $strongarm->value = array(
    'google_trends' => 'google_trends',
    'google_insights' => 'google_insights',
    'gorank_related' => 'gorank_related',
    'keyworddiscovery' => 'keyworddiscovery',
  );
  $export['kwresearch_stats_report_links_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array(
    '' => array(
      '"Just Another Social Module" Settings' => 'Social media',
      'Add content' => 'Create',
      'Authoring information' => 'Authoring Information',
      'Content analysis' => 'Content Analysis',
      'Create content' => 'Create Content',
      'Current draft' => 'Current Draft',
      'Disable developer modules' => 'Disable themer info',
      'Edit answer' => 'Edit',
      'Enable developer modules' => 'Enable themer info',
      'FAQ' => 'Answer',
      'Menu settings' => 'Menu Options',
      'Meta tags' => 'Meta Tags',
      'Moderate' => 'Editorial',
      'Moderation notes' => 'Revision log message',
      'Moderation State' => 'Current Editorial State',
      'Moderation state' => 'Update Editorial State',
      'My account' => 'My Profile',
      'My content' => 'Drafts',
      'My Workbench' => 'Drafts',
      'Needs Review' => 'Drafts Pending Optimization',
      'New content' => 'Note',
      'New draft' => 'New Draft',
      'New draft of live content.' => 'New draft of published content.',
      'Publishing options' => 'Editorial Options',
      'Registration successful. You are now logged in.' => 'Registration is successful. Please submit your testimonial by filling out the form below.',
      'Revision information' => 'Revision Notes',
      'Revision state' => 'Current Editorial State',
      'Save as draft' => 'Save',
      'Select an environment' => 'Select a site mode',
      'Set moderation state:' => 'Update Editorial State:',
      'Set the moderation state for this content.' => 'Set the editorial state for this content.',
      'Status' => 'Note',
      'Unassigned zones' => 'Unassigned',
      'Verifications' => 'Bing',
      'Your draft will be placed in moderation.' => 'When revision of this content is complete, change the editorial state to \'Ready for Optimization\'.',
    ),
  );
  $export['locale_custom_strings_en'] = $strongarm;

  return $export;
}
