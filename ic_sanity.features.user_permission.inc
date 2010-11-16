<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ic_sanity_user_default_permissions() {
  $permissions = array();

  // Exported permission: view imagecache inc_large
  $permissions['view imagecache inc_large'] = array(
    'name' => 'view imagecache inc_large',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache inc_medium
  $permissions['view imagecache inc_medium'] = array(
    'name' => 'view imagecache inc_medium',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache inc_thumbnail
  $permissions['view imagecache inc_thumbnail'] = array(
    'name' => 'view imagecache inc_thumbnail',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache inc_tiny
  $permissions['view imagecache inc_tiny'] = array(
    'name' => 'view imagecache inc_tiny',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
