<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function wn_map_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'main_map';
  $openlayers_presets->title = 'Map';
  $openlayers_presets->description = 'The main map';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '/sites/all/modules/features/wn_map/openlayers_themes/wn/',
    'css_path' => '/sites/all/modules/features/wn_map/openlayers_themes/wn/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-79.233398434294, 38.410558249643',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'map_feature_data_openlayers_1' => 'map_feature_data_openlayers_1',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 0,
        'roundedCornerColor' => 'darkblue',
      ),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_permalink' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'map_feature_data_openlayers_1',
        'point_zoom_level' => '8',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'map_feature_data_openlayers_1' => 'map_feature_data_openlayers_1',
    ),
    'layer_styles' => array(
      'map_feature_data_openlayers_1' => 'features',
    ),
    'layer_activated' => array(
      'map_feature_data_openlayers_1' => 'map_feature_data_openlayers_1',
    ),
    'layer_switcher' => array(
      'map_feature_data_openlayers_1' => 'map_feature_data_openlayers_1',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'features',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['main_map'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'picker_map';
  $openlayers_presets->title = 'Picker map';
  $openlayers_presets->description = 'A location picker map';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '350px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-77.398681637554, 40.220829971489',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 'path',
          'polygon' => 'polygon',
        ),
        'feature_limit' => '0',
        'element_id' => '',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['picker_map'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'sidebar_map';
  $openlayers_presets->title = 'Sidebar map';
  $openlayers_presets->description = 'Sidbar map';
  $openlayers_presets->data = array(
    'width' => '270px',
    'height' => '270px',
    'image_path' => '/sites/all/modules/features/wn_map/openlayers_themes/wn/',
    'css_path' => '/sites/all/modules/features/wn_map/openlayers_themes/wn/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'map_feature_data_with_args_openlayers_1',
        'point_zoom_level' => '6',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'map_feature_data_with_args_openlayers_1' => 'map_feature_data_with_args_openlayers_1',
    ),
    'layer_styles' => array(
      'map_feature_data_openlayers_1' => 'features',
      'map_feature_data_with_args_openlayers_1' => 'sidebar_features',
    ),
    'layer_activated' => array(
      'map_feature_data_with_args_openlayers_1' => 'map_feature_data_with_args_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['sidebar_map'] = $openlayers_presets;
  return $export;
}
