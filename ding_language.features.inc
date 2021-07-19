<?php
/**
 * @file
 * ding_language.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_language_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ding_language_strongarm_alter(&$data) {
  if (isset($data['i18n_string_allowed_formats'])) {
    $data['i18n_string_allowed_formats']->value['ding_wysiwyg'] = 'ding_wysiwyg'; /* WAS: 0 */
  }
  if (isset($data['language_negotiation_language'])) {
    $data['language_negotiation_language']->value['locale-url'] = array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ); /* WAS: '' */
    unset($data['language_negotiation_language']->value['locale-session']);
    unset($data['language_negotiation_language']->value['locale-user']);
  }
  if (isset($data['language_negotiation_language_url'])) {
    unset($data['language_negotiation_language_url']->value['locale-url']);
  }
  if (isset($data['languageicons_path'])) {
    $data['languageicons_path']->value = 'https://storage.easyting.dk/icons/*.png'; /* WAS: 'profiles/ding2/modules/contrib/languageicons/flags/*.png' */
  }
}
