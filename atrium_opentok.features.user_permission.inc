<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_opentok_user_default_permissions() {
  $permissions = array();

  // Exported permission: create video_chat_og content
  $permissions['create video_chat_og content'] = array(
    'name' => 'create video_chat_og content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any video_chat_og content
  $permissions['delete any video_chat_og content'] = array(
    'name' => 'delete any video_chat_og content',
    'roles' => array(),
  );

  // Exported permission: delete own video_chat_og content
  $permissions['delete own video_chat_og content'] = array(
    'name' => 'delete own video_chat_og content',
    'roles' => array(),
  );

  // Exported permission: edit any video_chat_og content
  $permissions['edit any video_chat_og content'] = array(
    'name' => 'edit any video_chat_og content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own video_chat_og content
  $permissions['edit own video_chat_og content'] = array(
    'name' => 'edit own video_chat_og content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
