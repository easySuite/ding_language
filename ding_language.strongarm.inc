<?php
/**
 * @file
 * ding_language.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_language_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_language_random';
  $strongarm->value = 0;
  $export['ding_language_random'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = 1;
  $export['i18n_hide_translation_links'] = $strongarm;

  return $export;
}
