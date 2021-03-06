<?php

/**
 * @file
 * pori_attraction_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pori_attraction_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|attraction_card|attraction_card_mosaic_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'attraction_card';
  $ds_fieldsetting->view_mode = 'attraction_card_mosaic_item';
  $ds_fieldsetting->settings = array(
    'liftup_description' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'liftup_title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_keywords_et' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'attraction-card-mosaic__keyword',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|attraction_card|attraction_card_mosaic_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|attraction_card|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'attraction_card';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'duplicate_images' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:7:"current";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:1:{s:4:"link";s:1:"0";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:17:"node:field_images";}',
        'load_terms' => 0,
      ),
    ),
    'duplicate_online_shop' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"link_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:22:"node:field_online_shop";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['node|attraction_card|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|attraction_card|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'attraction_card';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'attraction_contact_information' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'map_attraction' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'duplicate_info_box_bottom' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:5:"title";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:30:"node:field_attraction_info_box";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'info-box--dupicate',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'info-box info-box--bottom',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'service_links_displays_group' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'sld_group_text',
    ),
    'field_attraction_info_box' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'info-box info-box--bottom',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_product_liftup' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'liftup--product',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'liftup-box liftup-box--wide',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|attraction_card|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'widget|attraction_list|default';
  $ds_fieldsetting->entity_type = 'widget';
  $ds_fieldsetting->bundle = 'attraction_list';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'widget_attraction_list_view' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['widget|attraction_list|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pori_attraction_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'attraction_contact_information';
  $ds_field->label = 'Attraction contact information';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'attraction_card|*';
  $ds_field->properties = array(
    'block' => 'views|attractions-block',
    'block_render' => '3',
  );
  $export['attraction_contact_information'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'duplicate_images';
  $ds_field->label = 'Duplicate images';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = 'attraction_card|*
waste_type|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['duplicate_images'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'duplicate_online_shop';
  $ds_field->label = 'Duplicate online shop';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'attraction_card|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['duplicate_online_shop'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'liftup_description';
  $ds_field->label = 'Liftup description';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'attraction_card|*';
  $ds_field->properties = array();
  $export['liftup_description'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'liftup_title';
  $ds_field->label = 'Liftup title';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'attraction_card|*';
  $ds_field->properties = array();
  $export['liftup_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map_attraction';
  $ds_field->label = 'Map | Attraction';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'attraction_card|*';
  $ds_field->properties = array(
    'block' => 'views|attraction_map-map_single',
    'block_render' => '3',
  );
  $export['map_attraction'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pori_attraction_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|attraction_card|attraction_card_mosaic_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'attraction_card';
  $ds_layout->view_mode = 'attraction_card_mosaic_item';
  $ds_layout->layout = 'liftup_mosaic_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'top_content' => array(
        0 => 'field_image',
      ),
      'right_content_top' => array(
        1 => 'field_keywords_et',
      ),
      'bottom_content' => array(
        2 => 'liftup_title',
        3 => 'liftup_description',
      ),
    ),
    'fields' => array(
      'field_image' => 'top_content',
      'field_keywords_et' => 'right_content_top',
      'liftup_title' => 'bottom_content',
      'liftup_description' => 'bottom_content',
    ),
    'limit' => array(
      'field_image' => '1',
      'field_keywords_et' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top_content' => 'div',
      'right_content_top' => 'div',
      'bottom_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|attraction_card|attraction_card_mosaic_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|attraction_card|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'attraction_card';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'attraction_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'before_content' => array(
        0 => 'field_online_shop',
      ),
      'image_container' => array(
        1 => 'field_images',
        2 => 'duplicate_images',
      ),
      'main_content' => array(
        3 => 'field_lead_paragraph_et',
        4 => 'field_description',
        5 => 'field_video_url',
      ),
      'sidebar' => array(
        6 => 'field_keywords_et',
      ),
      'contact_details' => array(
        7 => 'field_address_visiting',
        8 => 'field_phone',
        9 => 'field_email',
        10 => 'field_websites',
        11 => 'field_accessibility_ref',
        12 => 'field_public_transportation',
        13 => 'duplicate_online_shop',
      ),
      'after_content' => array(
        14 => 'field_attraction_related_content',
      ),
    ),
    'fields' => array(
      'field_online_shop' => 'before_content',
      'field_images' => 'image_container',
      'duplicate_images' => 'image_container',
      'field_lead_paragraph_et' => 'main_content',
      'field_description' => 'main_content',
      'field_video_url' => 'main_content',
      'field_keywords_et' => 'sidebar',
      'field_address_visiting' => 'contact_details',
      'field_phone' => 'contact_details',
      'field_email' => 'contact_details',
      'field_websites' => 'contact_details',
      'field_accessibility_ref' => 'contact_details',
      'field_public_transportation' => 'contact_details',
      'duplicate_online_shop' => 'contact_details',
      'field_attraction_related_content' => 'after_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'before_content' => 'div',
      'image_container' => 'div',
      'main_content' => 'div',
      'sidebar' => 'div',
      'contact_details' => 'div',
      'after_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|attraction_card|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|attraction_card|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'attraction_card';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'attraction_card_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'top_content' => array(
        0 => 'field_image',
        2 => 'title',
      ),
      'bottom_content' => array(
        1 => 'service_links_displays_group',
        7 => 'field_attraction_info_box',
        8 => 'field_attraction_product_desc',
        9 => 'field_keywords_et',
        10 => 'field_product_liftup',
        11 => 'map_attraction',
        12 => 'group_accordion',
        13 => 'group_accordion_item',
        14 => 'group_accordion_item_2nd',
      ),
      'left_content' => array(
        3 => 'field_lead_paragraph_et',
        4 => 'field_description',
      ),
      'right_content_top' => array(
        5 => 'attraction_contact_information',
      ),
      'right_content' => array(
        6 => 'duplicate_info_box_bottom',
      ),
    ),
    'fields' => array(
      'field_image' => 'top_content',
      'service_links_displays_group' => 'bottom_content',
      'title' => 'top_content',
      'field_lead_paragraph_et' => 'left_content',
      'field_description' => 'left_content',
      'attraction_contact_information' => 'right_content_top',
      'duplicate_info_box_bottom' => 'right_content',
      'field_attraction_info_box' => 'bottom_content',
      'field_attraction_product_desc' => 'bottom_content',
      'field_keywords_et' => 'bottom_content',
      'field_product_liftup' => 'bottom_content',
      'map_attraction' => 'bottom_content',
      'group_accordion' => 'bottom_content',
      'group_accordion_item' => 'bottom_content',
      'group_accordion_item_2nd' => 'bottom_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top_content' => 'div',
      'left_content' => 'div',
      'right_content_top' => 'div',
      'right_content' => 'div',
      'right_content_bottom' => 'div',
      'bottom_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|attraction_card|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|attraction_card|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'attraction_card';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'search_result_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_image',
      ),
      'main' => array(
        1 => 'field_attraction_category',
        2 => 'field_lead_paragraph_et',
        3 => 'field_attraction_product_desc',
      ),
    ),
    'fields' => array(
      'field_image' => 'media',
      'field_attraction_category' => 'main',
      'field_lead_paragraph_et' => 'main',
      'field_attraction_product_desc' => 'main',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'media' => 'div',
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|attraction_card|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'widget|attraction_list|default';
  $ds_layout->entity_type = 'widget';
  $ds_layout->bundle = 'attraction_list';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'widget_attraction_list_view',
      ),
    ),
    'fields' => array(
      'widget_attraction_list_view' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['widget|attraction_list|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pori_attraction_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'attraction_card_mosaic_item';
  $ds_view_mode->label = 'Attraction Card Mosaic Item';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['attraction_card_mosaic_item'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'product';
  $ds_view_mode->label = 'Product';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['product'] = $ds_view_mode;

  return $export;
}
