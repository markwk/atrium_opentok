<?php

/**
 * Implementation of hook_content_default_fields().
 */
function atrium_opentok_content_default_fields() {
  $fields = array();

  // Exported field: field_date
  $fields['video_chat_og-field_date'] = array(
    'field_name' => 'field_date',
    'type_name' => 'video_chat_og',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'long',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'long',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'long',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'default_value_custom' => '',
      'default_value_custom2' => '',
      'label' => 'Date',
      'weight' => '-3',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_opentok_sess
  $fields['video_chat_og-field_opentok_sess'] = array(
    'field_name' => 'field_opentok_sess',
    'type_name' => 'video_chat_og',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'opentokapi',
    'required' => '0',
    'multiple' => '0',
    'module' => 'opentokapi',
    'active' => '1',
    'author_role' => 'publisher',
    'regenerate_session' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'api_key' => '',
          'api_staging' => '',
          'session_id' => '',
          'regenerate_session' => 1,
          'auto_connect' => 0,
          'auto_publish' => 0,
          'push_talk' => 0,
          'session_type' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Chat',
      'weight' => 0,
      'description' => '',
      'type' => 'opentokapi_default',
      'module' => 'opentokapi',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');
  t('Video Chat');

  return $fields;
}
