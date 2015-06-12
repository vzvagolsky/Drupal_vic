<?php

/**
 * Implements hook_views_data().
 */
function shop_views_data() {
  
  $data = array();
  
  $data['shop']['table']['group'] = t('My Shop');
  
  $data['shop']['table']['base'] = array(
    'title' => t('Shoping'),
    'help' => t('Contains records we want shop to Views.'),
  );  
  
  $data['shop']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'node_id',
    ),
  );
  
  // The ID field
  $data['shop']['id'] = array(
    'title' => t('ID'),
    'help' => t('The record ID.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );
  
  // The Athor field
  $data['shop']['athor'] = array(
    'title' => t('Athor'),
    'help' => t('The name is Athor.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );
  
  // The Book field
  $data['shop']['name_book'] = array(
    'title' => t('Name_Book'),
    'help' => t('The name is Book.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );




  // The Deadline field
  $data['shop']['price'] = array(
    'title' => t('Price'),
    'help' => t('The record Price.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );
  
  // The Node ID field
  $data['shop']['node_id'] = array(
    'title' => t('Node ID'),
    'help' => t('The record node ID.'),
    'field' => array(
      'handler' => 'views_handler_field_node',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'relationship' => array(
      'base' => 'node',
      'field' => 'node_id',
      'handler' => 'views_handler_relationship',
      'label' => t('Node'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_node_nid',
      'numeric' => TRUE,
      'validate type' => 'nid',
    ),
  );
              $data['shop']['operation'] = array(
    // Информация для операций.
    'field' => array(
      'title' => t('Operations links'),
      'help' => t('Display all the available operations links for the product.'),
     'handler' => 'shop_handler_field_shop_operations',
    ),
  );
 
 

  
  return $data;
  
}
