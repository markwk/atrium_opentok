<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_opentok_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_opentok_node_info() {
  $items = array(
    'video_chat_og' => array(
      'name' => t('Video Chat'),
      'module' => 'features',
      'description' => t('Video Chat sessions for Groups'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_opentok_views_api() {
  return array(
    'api' => '2',
  );
}
