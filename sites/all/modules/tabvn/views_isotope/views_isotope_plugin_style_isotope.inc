<?php

/**
 * @file
 */

/**
 * Style plugin.
 */
class views_isotope_plugin_style_isotope extends views_plugin_style_list {

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['portfolio_style'] = array('default' => 'four columns');
    return $options;
  }

  /**
   * Render the given style.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);


    $form['portfolio_style'] = array(
        '#title' => t('Portfolio style'),
        '#description' => t('This is columns per row'),
        '#type' => 'select',
        '#default_value' => $this->options['portfolio_style'],
        '#options' => array(
            'four columns' => 4,
            'one-third column' => 3,
            'eight columns' => 2,
            'sixteen columns' => 1,
        ),
    );
  }

}

