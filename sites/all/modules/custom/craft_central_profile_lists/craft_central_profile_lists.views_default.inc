<?php
/**
 * @file
 * craft_central_profile_lists.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function craft_central_profile_lists_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'civi_designer_makers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Designer Makers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Designer Maker Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'display_name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Search',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'category_25' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Discipline',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'do_you_accept_commissions__26' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Commissions',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-12 col-md-4 col-lg-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['profile_picture_7']['id'] = 'profile_picture_7';
  $handler->display->display_options['fields']['profile_picture_7']['table'] = 'civicrm_value_designer_fields_4';
  $handler->display->display_options['fields']['profile_picture_7']['field'] = 'profile_picture_7';
  $handler->display->display_options['fields']['profile_picture_7']['label'] = '';
  $handler->display->display_options['fields']['profile_picture_7']['alter']['text'] = '<img src="[profile_picture_7]" class="img-responsive">';
  $handler->display->display_options['fields']['profile_picture_7']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['label'] = '';
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Filter criterion: CiviCRM Contacts: Contact Sub Type */
  $handler->display->display_options['filters']['contact_sub_type']['id'] = 'contact_sub_type';
  $handler->display->display_options['filters']['contact_sub_type']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['contact_sub_type']['field'] = 'contact_sub_type';
  $handler->display->display_options['filters']['contact_sub_type']['value'] = array(
    'Designer_Maker' => 'Designer_Maker',
  );
  $handler->display->display_options['filters']['contact_sub_type']['group'] = 1;
  /* Filter criterion: CiviCRM Groups: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'civicrm_group';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['title']['group'] = 1;
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['group'] = 1;
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator_id'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: CiviCRM Custom: Designer Information: Category */
  $handler->display->display_options['filters']['category_25']['id'] = 'category_25';
  $handler->display->display_options['filters']['category_25']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['filters']['category_25']['field'] = 'category_25';
  $handler->display->display_options['filters']['category_25']['group'] = 1;
  $handler->display->display_options['filters']['category_25']['exposed'] = TRUE;
  $handler->display->display_options['filters']['category_25']['expose']['operator_id'] = 'category_25_op';
  $handler->display->display_options['filters']['category_25']['expose']['operator'] = 'category_25_op';
  $handler->display->display_options['filters']['category_25']['expose']['identifier'] = 'category_25';
  $handler->display->display_options['filters']['category_25']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: CiviCRM Custom: Designer Information: Do you accept commissions? */
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['id'] = 'do_you_accept_commissions__26';
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['field'] = 'do_you_accept_commissions__26';
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['group'] = 1;
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['exposed'] = TRUE;
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['expose']['operator_id'] = 'do_you_accept_commissions__26_op';
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['expose']['operator'] = 'do_you_accept_commissions__26_op';
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['expose']['identifier'] = 'do_you_accept_commissions__26';
  $handler->display->display_options['filters']['do_you_accept_commissions__26']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: CiviCRM Tags: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'civicrm_tag';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = array(
    10 => '10',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Profile Picture */
  $handler->display->display_options['fields']['profile_picture_29']['id'] = 'profile_picture_29';
  $handler->display->display_options['fields']['profile_picture_29']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['profile_picture_29']['field'] = 'profile_picture_29';
  $handler->display->display_options['fields']['profile_picture_29']['label'] = '';
  $handler->display->display_options['fields']['profile_picture_29']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['label'] = '';
  $handler->display->display_options['fields']['display_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Address: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['alter']['text'] = '<a href="/designer-profile/[display_name]/[contact_id]">[display_name]</a>';
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'designer-makers';

  /* Display: Featured Designer Maker */
  $handler = $view->new_display('attachment', 'Featured Designer Maker', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-12 col-md-12 col-lg-12';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Profile Picture */
  $handler->display->display_options['fields']['profile_picture_29']['id'] = 'profile_picture_29';
  $handler->display->display_options['fields']['profile_picture_29']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['profile_picture_29']['field'] = 'profile_picture_29';
  $handler->display->display_options['fields']['profile_picture_29']['label'] = '';
  $handler->display->display_options['fields']['profile_picture_29']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['label'] = '';
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Custom: Designer Information: Category */
  $handler->display->display_options['fields']['category_25']['id'] = 'category_25';
  $handler->display->display_options['fields']['category_25']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['category_25']['field'] = 'category_25';
  $handler->display->display_options['fields']['category_25']['label'] = '';
  $handler->display->display_options['fields']['category_25']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Designer Information: Biography */
  $handler->display->display_options['fields']['biography_27']['id'] = 'biography_27';
  $handler->display->display_options['fields']['biography_27']['table'] = 'civicrm_value_designer_information_10';
  $handler->display->display_options['fields']['biography_27']['field'] = 'biography_27';
  $handler->display->display_options['fields']['biography_27']['label'] = '';
  $handler->display->display_options['fields']['biography_27']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Address: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['alter']['text'] = '<a href="/designer-profile/[display_name]/12">View Profile</a>';
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: CiviCRM Groups: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'civicrm_group';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = array(
    2 => '2',
  );
  /* Filter criterion: CiviCRM Tags: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'civicrm_tag';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['civi_designer_makers'] = $view;

  return $export;
}
