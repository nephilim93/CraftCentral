<?php
/**
 * @file
 * craft_central_profile_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function craft_central_profile_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'civi_designer_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Designer Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Designer Profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['hero_picture_6']['id'] = 'hero_picture_6';
  $handler->display->display_options['fields']['hero_picture_6']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['hero_picture_6']['field'] = 'hero_picture_6';
  $handler->display->display_options['fields']['hero_picture_6']['label'] = '';
  $handler->display->display_options['fields']['hero_picture_6']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['category_3']['id'] = 'category_3';
  $handler->display->display_options['fields']['category_3']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['category_3']['field'] = 'category_3';
  $handler->display->display_options['fields']['category_3']['label'] = '';
  $handler->display->display_options['fields']['category_3']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  /* Field: CiviCRM Address: State/Province */
  $handler->display->display_options['fields']['state_province']['id'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['state_province']['field'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['label'] = '';
  $handler->display->display_options['fields']['state_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state_province']['location_type'] = '0';
  $handler->display->display_options['fields']['state_province']['location_op'] = '0';
  $handler->display->display_options['fields']['state_province']['is_primary'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['do_you_accept_commissions__4']['id'] = 'do_you_accept_commissions__4';
  $handler->display->display_options['fields']['do_you_accept_commissions__4']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['do_you_accept_commissions__4']['field'] = 'do_you_accept_commissions__4';
  $handler->display->display_options['fields']['do_you_accept_commissions__4']['label'] = '';
  $handler->display->display_options['fields']['do_you_accept_commissions__4']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['profile_picture_7']['id'] = 'profile_picture_7';
  $handler->display->display_options['fields']['profile_picture_7']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['profile_picture_7']['field'] = 'profile_picture_7';
  $handler->display->display_options['fields']['profile_picture_7']['label'] = '';
  $handler->display->display_options['fields']['profile_picture_7']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['biography_5']['id'] = 'biography_5';
  $handler->display->display_options['fields']['biography_5']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['biography_5']['field'] = 'biography_5';
  $handler->display->display_options['fields']['biography_5']['label'] = '';
  $handler->display->display_options['fields']['biography_5']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['website_url_8']['id'] = 'website_url_8';
  $handler->display->display_options['fields']['website_url_8']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['website_url_8']['field'] = 'website_url_8';
  $handler->display->display_options['fields']['website_url_8']['label'] = '';
  $handler->display->display_options['fields']['website_url_8']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Email: Email Address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'civicrm_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['location_type'] = '0';
  $handler->display->display_options['fields']['email']['location_op'] = '0';
  $handler->display->display_options['fields']['email']['is_primary'] = 0;
  $handler->display->display_options['fields']['email']['link_to_user'] = '0';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['facebook_link_9']['id'] = 'facebook_link_9';
  $handler->display->display_options['fields']['facebook_link_9']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['facebook_link_9']['field'] = 'facebook_link_9';
  $handler->display->display_options['fields']['facebook_link_9']['label'] = '';
  $handler->display->display_options['fields']['facebook_link_9']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['twitter_link_10']['id'] = 'twitter_link_10';
  $handler->display->display_options['fields']['twitter_link_10']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['twitter_link_10']['field'] = 'twitter_link_10';
  $handler->display->display_options['fields']['twitter_link_10']['label'] = '';
  $handler->display->display_options['fields']['twitter_link_10']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['twitter_link_10']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['pinterest_11']['id'] = 'pinterest_11';
  $handler->display->display_options['fields']['pinterest_11']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['pinterest_11']['field'] = 'pinterest_11';
  $handler->display->display_options['fields']['pinterest_11']['label'] = '';
  $handler->display->display_options['fields']['pinterest_11']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['linkedin_profile_12']['id'] = 'linkedin_profile_12';
  $handler->display->display_options['fields']['linkedin_profile_12']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['linkedin_profile_12']['field'] = 'linkedin_profile_12';
  $handler->display->display_options['fields']['linkedin_profile_12']['label'] = '';
  $handler->display->display_options['fields']['linkedin_profile_12']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['youtube_link_13']['id'] = 'youtube_link_13';
  $handler->display->display_options['fields']['youtube_link_13']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['youtube_link_13']['field'] = 'youtube_link_13';
  $handler->display->display_options['fields']['youtube_link_13']['label'] = '';
  $handler->display->display_options['fields']['youtube_link_13']['element_label_colon'] = FALSE;
  /* Contextual filter: CiviCRM Contacts: Display Name */
  $handler->display->display_options['arguments']['display_name']['id'] = 'display_name';
  $handler->display->display_options['arguments']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['arguments']['display_name']['field'] = 'display_name';
  $handler->display->display_options['arguments']['display_name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['display_name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['display_name']['title'] = '%1';
  $handler->display->display_options['arguments']['display_name']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['display_name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['display_name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['display_name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['display_name']['limit'] = '0';
  /* Contextual filter: CiviCRM Address: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'civicrm_address';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  /* Field: CiviCRM Address: State/Province */
  $handler->display->display_options['fields']['state_province']['id'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['state_province']['field'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['label'] = '';
  $handler->display->display_options['fields']['state_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state_province']['location_type'] = '0';
  $handler->display->display_options['fields']['state_province']['location_op'] = '0';
  $handler->display->display_options['fields']['state_province']['is_primary'] = 0;
  /* Field: CiviCRM Email: Email Address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'civicrm_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['location_type'] = '0';
  $handler->display->display_options['fields']['email']['location_op'] = '0';
  $handler->display->display_options['fields']['email']['is_primary'] = 0;
  $handler->display->display_options['fields']['email']['link_to_user'] = '0';
  /* Field: CiviCRM Custom: Designer Information: Biography */
  $handler->display->display_options['fields']['biography_27']['id'] = 'biography_27';
  $handler->display->display_options['fields']['biography_27']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['biography_27']['field'] = 'biography_27';
  $handler->display->display_options['fields']['biography_27']['label'] = '';
  $handler->display->display_options['fields']['biography_27']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Category */
  $handler->display->display_options['fields']['category_25']['id'] = 'category_25';
  $handler->display->display_options['fields']['category_25']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['category_25']['field'] = 'category_25';
  $handler->display->display_options['fields']['category_25']['label'] = '';
  $handler->display->display_options['fields']['category_25']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Do you accept commissions? */
  $handler->display->display_options['fields']['do_you_accept_commissions__26']['id'] = 'do_you_accept_commissions__26';
  $handler->display->display_options['fields']['do_you_accept_commissions__26']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['do_you_accept_commissions__26']['field'] = 'do_you_accept_commissions__26';
  $handler->display->display_options['fields']['do_you_accept_commissions__26']['label'] = '';
  $handler->display->display_options['fields']['do_you_accept_commissions__26']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['do_you_accept_commissions__26']['civicrm_custom_formatter'] = 'value';
  /* Field: CiviCRM Custom: Designer Information: Facebook Link */
  $handler->display->display_options['fields']['facebook_link_31']['id'] = 'facebook_link_31';
  $handler->display->display_options['fields']['facebook_link_31']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['facebook_link_31']['field'] = 'facebook_link_31';
  $handler->display->display_options['fields']['facebook_link_31']['label'] = '';
  $handler->display->display_options['fields']['facebook_link_31']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Hero Picture */
  $handler->display->display_options['fields']['hero_picture_28']['id'] = 'hero_picture_28';
  $handler->display->display_options['fields']['hero_picture_28']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['hero_picture_28']['field'] = 'hero_picture_28';
  $handler->display->display_options['fields']['hero_picture_28']['label'] = '';
  $handler->display->display_options['fields']['hero_picture_28']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Linkedin Profile Link */
  $handler->display->display_options['fields']['linkedin_profile_link_34']['id'] = 'linkedin_profile_link_34';
  $handler->display->display_options['fields']['linkedin_profile_link_34']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['linkedin_profile_link_34']['field'] = 'linkedin_profile_link_34';
  $handler->display->display_options['fields']['linkedin_profile_link_34']['label'] = '';
  $handler->display->display_options['fields']['linkedin_profile_link_34']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Pinterest Link */
  $handler->display->display_options['fields']['pinterest_link_33']['id'] = 'pinterest_link_33';
  $handler->display->display_options['fields']['pinterest_link_33']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['pinterest_link_33']['field'] = 'pinterest_link_33';
  $handler->display->display_options['fields']['pinterest_link_33']['label'] = '';
  $handler->display->display_options['fields']['pinterest_link_33']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Profile Picture */
  $handler->display->display_options['fields']['profile_picture_29']['id'] = 'profile_picture_29';
  $handler->display->display_options['fields']['profile_picture_29']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['profile_picture_29']['field'] = 'profile_picture_29';
  $handler->display->display_options['fields']['profile_picture_29']['label'] = '';
  $handler->display->display_options['fields']['profile_picture_29']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Twitter Link */
  $handler->display->display_options['fields']['twitter_link_32']['id'] = 'twitter_link_32';
  $handler->display->display_options['fields']['twitter_link_32']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['twitter_link_32']['field'] = 'twitter_link_32';
  $handler->display->display_options['fields']['twitter_link_32']['label'] = '';
  $handler->display->display_options['fields']['twitter_link_32']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Website URL */
  $handler->display->display_options['fields']['website_url_30']['id'] = 'website_url_30';
  $handler->display->display_options['fields']['website_url_30']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['website_url_30']['field'] = 'website_url_30';
  $handler->display->display_options['fields']['website_url_30']['label'] = '';
  $handler->display->display_options['fields']['website_url_30']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Youtube Link */
  $handler->display->display_options['fields']['youtube_link_35']['id'] = 'youtube_link_35';
  $handler->display->display_options['fields']['youtube_link_35']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['youtube_link_35']['field'] = 'youtube_link_35';
  $handler->display->display_options['fields']['youtube_link_35']['label'] = '';
  $handler->display->display_options['fields']['youtube_link_35']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'designer-profile';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Custom: Designer Pictures: Item Picture */
  $handler->display->display_options['fields']['item_picture_24']['id'] = 'item_picture_24';
  $handler->display->display_options['fields']['item_picture_24']['table'] = 'civicrm_value_designer_pictures_9';
  $handler->display->display_options['fields']['item_picture_24']['field'] = 'item_picture_24';
  $handler->display->display_options['fields']['item_picture_24']['label'] = '';
  $handler->display->display_options['fields']['item_picture_24']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Pictures: Item Name */
  $handler->display->display_options['fields']['item_name_22']['id'] = 'item_name_22';
  $handler->display->display_options['fields']['item_name_22']['table'] = 'civicrm_value_designer_pictures_9';
  $handler->display->display_options['fields']['item_name_22']['field'] = 'item_name_22';
  $handler->display->display_options['fields']['item_name_22']['label'] = '';
  $handler->display->display_options['fields']['item_name_22']['element_type'] = 'h4';
  $handler->display->display_options['fields']['item_name_22']['element_class'] = 'item_title';
  $handler->display->display_options['fields']['item_name_22']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_name_22']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['item_name_22']['text_format'] = 'full_html';
  /* Field: CiviCRM Custom: Designer Pictures: Item Description */
  $handler->display->display_options['fields']['item_description_23']['id'] = 'item_description_23';
  $handler->display->display_options['fields']['item_description_23']['table'] = 'civicrm_value_designer_pictures_9';
  $handler->display->display_options['fields']['item_description_23']['field'] = 'item_description_23';
  $handler->display->display_options['fields']['item_description_23']['label'] = '';
  $handler->display->display_options['fields']['item_description_23']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['civi_designer_profile'] = $view;

  return $export;
}
