<?php
/**
 * @file
 * pro_101_wrap.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function pro_101_wrap_ccl_features_preset() {
  return array(
    'Editorial History' => array(
      'type' => 'node',
      'title' => 'Editorial History',
      'link' => 'node/[node:nid]/moderation',
      'options' => 'a:14:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:12:"node_options";s:6:"global";s:9:"node_type";s:3:"faq";s:7:"node_id";s:0:"";s:12:"block_global";i:0;s:12:"block_select";s:21:"masquerade|masquerade";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:0:"";s:8:"la_types";a:8:{s:3:"faq";i:0;s:5:"block";i:0;s:4:"blog";i:0;s:8:"featured";i:0;s:4:"page";i:0;s:9:"specialty";i:0;s:11:"testimonial";i:0;s:7:"webform";i:0;}s:8:"la_roles";a:6:{i:1;i:0;i:2;i:0;i:8998634;i:0;i:96220023;i:0;i:160159362;i:0;i:121011395;i:0;}s:12:"view_options";s:1:"2";s:12:"view_display";s:28:"workbench_moderation|default";s:9:"view_view";s:20:"workbench_moderation";}',
    ),
    'Email Settings' => array(
      'type' => 'node',
      'title' => 'Email Settings',
      'link' => 'node/[node:nid]/webform/emails',
      'options' => 'a:14:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:12:"node_options";s:2:"ct";s:9:"node_type";s:7:"webform";s:7:"node_id";s:0:"";s:12:"block_global";i:0;s:12:"block_select";s:21:"masquerade|masquerade";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:0:"";s:8:"la_types";a:8:{s:3:"faq";i:0;s:5:"block";i:0;s:4:"blog";i:0;s:8:"featured";i:0;s:4:"page";i:0;s:9:"specialty";i:0;s:11:"testimonial";i:0;s:7:"webform";i:0;}s:8:"la_roles";a:6:{i:1;i:0;i:2;i:0;i:8998634;i:0;i:96220023;i:0;i:160159362;i:0;i:121011395;i:0;}s:12:"view_options";s:1:"2";s:12:"view_display";s:28:"workbench_moderation|default";s:9:"view_view";s:20:"workbench_moderation";}',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_wrap_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "config_perms" && $api == "config_perms") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
