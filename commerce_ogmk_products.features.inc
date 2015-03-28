<?php
/**
 * @file
 * commerce_ogmk_products.features.inc
 */

/**
 * Implements hook_node_info().
 */
function commerce_ogmk_products_node_info() {
  $items = array(
    'product' => array(
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
