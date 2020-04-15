<?php

/**
 * @file
 */

/**
 * Ding language settings form.
 */
function ding_language_settings_form() {
  $form['ding_language'] = [
    '#type' => 'fieldset',
    '#title' => t('Ding Language Settings'),
    '#description' => t('Change Ding Language related settings.'),
  ];

  $form['ding_language']['ding_language_translate_groups'] = [
    '#type' => 'fieldset',
    '#title' => t('Translate text groups'),
    '#description' => t('Check the textgoups which should be translateable for all enabled languages.'),
    '#collapsible' => TRUE,
  ];

  $groups = module_invoke_all('locale', 'groups');

  $form['ding_language']['ding_language_translate_groups']['ding_language_text_groups'] = [
    '#type' => 'checkboxes',
    '#title' => t('Text groups'),
    '#options' => $groups,
    '#default_value' => variable_get('ding_language_text_groups', []),
  ];

  return system_settings_form($form);
}
