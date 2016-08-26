<?php
/**
 * @file
 * commerce_ogmk_products.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function commerce_ogmk_products_commerce_product_default_types() {
  $items = array(
    'ogmk_product' => array(
      'type' => 'ogmk_product',
      'name' => 'Product',
      'description' => 'The OGMK basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_ogmk_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commerce_ogmk_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function commerce_ogmk_products_node_info() {
  $items = array(
    'ogmk_product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
