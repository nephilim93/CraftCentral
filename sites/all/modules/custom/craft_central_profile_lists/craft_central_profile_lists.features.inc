<?php
/**
 * @file
 * craft_central_profile_lists.features.inc
 */

/**
 * Implements hook_views_api().
 */
function craft_central_profile_lists_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function craft_central_profile_lists_image_default_styles() {
  $styles = array();

  // Exported image style: designer_lists.
  $styles['designer_lists'] = array(
    'label' => 'Designer Lists',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 700,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 700,
          'height' => 700,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
