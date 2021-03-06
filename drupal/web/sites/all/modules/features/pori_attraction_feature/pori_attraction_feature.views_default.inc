<?php

/**
 * @file
 * pori_attraction_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_attraction_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attraction_card_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attraction card widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Widgetti';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Hae';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Järjestele';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Nou';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Las';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'liftup-box liftup-box--attraction-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  /* Field: Field: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_images']['type'] = 'topics';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images']['field_api_classes'] = TRUE;
  /* Field: Field: Keywords */
  $handler->display->display_options['fields']['field_keywords_et']['id'] = 'field_keywords_et';
  $handler->display->display_options['fields']['field_keywords_et']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['fields']['field_keywords_et']['field'] = 'field_keywords_et';
  $handler->display->display_options['fields']['field_keywords_et']['label'] = '';
  $handler->display->display_options['fields']['field_keywords_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_keywords_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_keywords_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_keywords_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_keywords_et']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_keywords_et']['separator'] = '  ';
  $handler->display->display_options['fields']['field_keywords_et']['field_api_classes'] = TRUE;
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field_et']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Entity translation: Description: translated */
  $handler->display->display_options['fields']['field_description_et']['id'] = 'field_description_et';
  $handler->display->display_options['fields']['field_description_et']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description_et']['field'] = 'field_description_et';
  $handler->display->display_options['fields']['field_description_et']['label'] = '';
  $handler->display->display_options['fields']['field_description_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description_et']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description_et']['alter']['max_length'] = '115';
  $handler->display->display_options['fields']['field_description_et']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_description_et']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description_et']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description_et']['element_label_colon'] = FALSE;
  /* Field: Entity translation: Lead paragraph: translated */
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['id'] = 'field_lead_paragraph_et_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['table'] = 'field_data_field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['field'] = 'field_lead_paragraph_et_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['alter']['max_length'] = '115';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['empty'] = '[field_description_et]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="attraction-list--item__container">
<div class=" liftup-box__image attraction-list--item__image">[field_images]</div>
<div class="liftup-box__caption">
<h3 class="attraction-list--item__title">[title_field_et]</h3>
<div class="attraction-list--item__description">[field_lead_paragraph_et_et]</div>
<div class="attraction-list--item__keywords" style="display: none;">[field_keywords_et]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Field: Category (field_attraction_category) */
  $handler->display->display_options['arguments']['field_attraction_category_tid']['id'] = 'field_attraction_category_tid';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['table'] = 'field_data_field_attraction_category';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['field'] = 'field_attraction_category_tid';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_attraction_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_attraction_category_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Keywords (field_keywords_et) */
  $handler->display->display_options['arguments']['field_keywords_et_tid']['id'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['field'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_keywords_et_tid']['default_argument_options']['vocabularies'] = array(
    'keywords' => 'keywords',
  );
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attraction_card' => 'attraction_card',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;

  /* Display: List widget */
  $handler = $view->new_display('block', 'List widget', 'list');
  $translatables['attraction_card_widget'] = array(
    t('Master'),
    t('Widgetti'),
    t('more'),
    t('Hae'),
    t('Palauta oletusarvoihin'),
    t('Järjestele'),
    t('Nou'),
    t('Las'),
    t('Translations'),
    t('[field_description_et]'),
    t('<div class="attraction-list--item__container">
<div class=" liftup-box__image attraction-list--item__image">[field_images]</div>
<div class="liftup-box__caption">
<h3 class="attraction-list--item__title">[title_field_et]</h3>
<div class="attraction-list--item__description">[field_lead_paragraph_et_et]</div>
<div class="attraction-list--item__keywords" style="display: none;">[field_keywords_et]</div>
</div>
</div>'),
    t('Kaikki'),
    t('All'),
    t('List widget'),
  );
  $export['attraction_card_widget'] = $view;

  $view = new view();
  $view->name = 'attraction_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attraction map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '300';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '300';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'attraction_card' => 'attraction_card',
      'blog' => 0,
      'blog_post' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'person' => 0,
      'landing_page' => 0,
      'position_of_trust' => 0,
      'liftup' => 0,
      'service' => 0,
      'service_offer' => 0,
      'page' => 0,
      'section' => 0,
      'social_media_update' => 0,
      'event' => 0,
      'place' => 0,
      'news_item' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'og' => array(
      'current' => 0,
      'user' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['empty'] = '[field_location]';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attraction_card' => 'attraction_card',
  );
  /* Filter criterion: Field: Location (field_location:geohash) */
  $handler->display->display_options['filters']['field_location_geohash']['id'] = 'field_location_geohash';
  $handler->display->display_options['filters']['field_location_geohash']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_geohash']['field'] = 'field_location_geohash';
  $handler->display->display_options['filters']['field_location_geohash']['operator'] = 'not empty';

  /* Display: Single node OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'Single node OpenLayers Data Overlay', 'attraction_data_single');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_location',
    'other_lon' => 'field_location',
    'wkt' => 'field_location',
    'other_top' => 'field_location',
    'other_right' => 'field_location',
    'other_bottom' => 'field_location',
    'other_left' => 'field_location',
    'name_field' => '',
    'description_field' => '#row',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'all';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'attraction_card' => 'attraction_card',
  );

  /* Display: Map | Attraction single node */
  $handler = $view->new_display('block', 'Map | Attraction single node', 'map_single');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'pori_attraction_map_single';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'all';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'attraction_card' => 'attraction_card',
  );
  $translatables['attraction_map'] = array(
    t('Master'),
    t('more'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_location]'),
    t('Single node OpenLayers Data Overlay'),
    t('all'),
    t('Map | Attraction single node'),
  );
  $export['attraction_map'] = $view;

  $view = new view();
  $view->name = 'attractions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attractions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'all';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'attraction_card' => 'attraction_card',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attraction_card' => 'attraction_card',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: provides (node → node) */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Visiting address */
  $handler->display->display_options['fields']['field_address_visiting_1']['id'] = 'field_address_visiting_1';
  $handler->display->display_options['fields']['field_address_visiting_1']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_1']['field'] = 'field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_1']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_address_visiting_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_visiting_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_visiting_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_visiting_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_visiting_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone_1']['id'] = 'field_phone_1';
  $handler->display->display_options['fields']['field_phone_1']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone_1']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone_1']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_phone_1']['label'] = '';
  $handler->display->display_options['fields']['field_phone_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_1']['element_label_colon'] = FALSE;
  /* Field: Content: Location name */
  $handler->display->display_options['fields']['field_location_name']['id'] = 'field_location_name';
  $handler->display->display_options['fields']['field_location_name']['table'] = 'field_data_field_location_name';
  $handler->display->display_options['fields']['field_location_name']['field'] = 'field_location_name';
  $handler->display->display_options['fields']['field_location_name']['label'] = '';
  $handler->display->display_options['fields']['field_location_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_location_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_name']['empty'] = '[title_field]';
  $handler->display->display_options['fields']['field_location_name']['hide_empty'] = TRUE;
  /* Field: Content: Visiting address */
  $handler->display->display_options['fields']['field_address_visiting']['id'] = 'field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting']['field'] = 'field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting']['label'] = '';
  $handler->display->display_options['fields']['field_address_visiting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_visiting']['empty'] = '[field_address_visiting_1]';
  $handler->display->display_options['fields']['field_address_visiting']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_address_visiting']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_visiting']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['empty'] = '[field_phone_1]';
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $translatables['attractions'] = array(
    t('Master'),
    t('Contact information'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('all'),
    t('Block'),
    t('provides'),
    t('[title_field]'),
    t('[field_address_visiting_1]'),
    t('[field_phone_1]'),
  );
  $export['attractions'] = $view;

  $view = new view();
  $view->name = 'driveturku_attraction_card_er';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DriveTurku Attraction Card ER';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attraction_card' => 'attraction_card',
  );

  /* Display: Titles ER */
  $handler = $view->new_display('entityreference', 'Titles ER', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'title_field' => 'title_field',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['driveturku_attraction_card_er'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Titles ER'),
  );
  $export['driveturku_attraction_card_er'] = $view;

  return $export;
}
