<?php
/**
 * @file
 * ding_language.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ding_language_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.i18n_string_allowed_formats.value|ding_wysiwyg"] = 'ding_wysiwyg';
  $overrides["variable.language_negotiation_language.value|locale-session"]["DELETED"] = TRUE;
  $overrides["variable.language_negotiation_language.value|locale-url"] = array(
    'callbacks' => array(
      'language' => 'locale_language_from_url',
      'switcher' => 'locale_language_switcher_url',
      'url_rewrite' => 'locale_language_url_rewrite_url',
    ),
    'file' => 'includes/locale.inc',
  );
  $overrides["variable.language_negotiation_language.value|locale-user"]["DELETED"] = TRUE;
  $overrides["variable.language_negotiation_language_url.value|locale-url"]["DELETED"] = TRUE;
  $overrides["variable.languageicons_path.value"] = 'https://storage.easyting.dk/icons/*.png';

 return $overrides;
}
