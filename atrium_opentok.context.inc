<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_opentok_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video_chat';
  $context->description = '';
  $context->tag = 'Video Chat';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video_chat_og' => 'video_chat_og',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'video-chat' => 'video-chat',
      ),
    ),
    'views' => array(
      'values' => array(
        'video_chat_upcoming' => 'video_chat_upcoming',
        'video_chat_upcoming:page_1' => 'video_chat_upcoming:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-video_chat_upcoming-block_1' => array(
          'module' => 'views',
          'delta' => 'video_chat_upcoming-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Video Chat');
  $export['video_chat'] = $context;

  return $export;
}
