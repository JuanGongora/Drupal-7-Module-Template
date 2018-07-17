<?php

/**
 * @file
 * Admin page callback for the scaffolding module.
 */

/**
 * Builds and returns the scaffolding settings form.
 */
function scaffolding_admin_settings() {
    //strings with a prefix of # lets Drupal know that it's a setting and not some other type of data
  $form['scaffolding_example_setting'] = array(
    '#type' => 'textarea',
    '#title' => t('Example setting'),
    '#default_value' => variable_get('scaffolding_example_setting', ''),
    '#description' => t('This is an example setting.'),
    //sets whether there needs to be a value in order for the form to be submitted
    '#required' => TRUE,
  );
  return system_settings_form($form);
}