<?php
/**
 * @file
 * craft_central_profile_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function craft_central_profile_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function craft_central_profile_view_image_default_styles() {
  $styles = array();

  // Exported image style: carousel.
  $styles['carousel'] = array(
    'label' => 'Carousel',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 500,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 700,
          'height' => 500,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: normal.
  $styles['normal'] = array(
    'label' => 'Normal',
    'effects' => array(),
  );

  // Exported image style: profile_internal.
  $styles['profile_internal'] = array(
    'label' => 'Profile Internal',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 325,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 325,
          'height' => 325,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
