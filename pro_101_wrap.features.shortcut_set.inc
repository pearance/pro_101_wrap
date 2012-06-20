<?php
/**
 * @file
 * pro_101_wrap.features.shortcut_set.inc
 */

/**
 * Implements hook_shortcut_default_shortcut_set().
 */
function pro_101_wrap_shortcut_default_shortcut_set() {
  $shortcut_sets = array();
  $shortcut_sets['shortcut-set-1'] = array(
    'set_name' => 'shortcut-set-1',
    'title' => 'Default',
  );
  return $shortcut_sets;
}
