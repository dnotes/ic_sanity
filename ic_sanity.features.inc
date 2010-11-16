<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ic_sanity_imagecache_default_presets() {
  $items = array(
    'inc_large' => array(
      'presetname' => 'inc_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '340',
            'height' => '340',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'inc_medium' => array(
      'presetname' => 'inc_medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '280',
            'height' => '280',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'inc_thumbnail' => array(
      'presetname' => 'inc_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '95',
            'height' => '95',
          ),
        ),
      ),
    ),
    'inc_tiny' => array(
      'presetname' => 'inc_tiny',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '48',
            'height' => '48',
          ),
        ),
      ),
    ),
  );
  return $items;
}
