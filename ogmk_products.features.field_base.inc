<?php
/**
 * @file
 * ogmk_products.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ogmk_products_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'ogmk_products_ref'.
  $field_bases['ogmk_products_ref'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_products_ref',
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_product_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'options_list_limit' => '',
    ),
    'translatable' => 1,
    'type' => 'commerce_product_reference',
  );

  // Exported field_base: 'ogmk_weight'.
  $field_bases['ogmk_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_weight',
    'indexes' => array(
      'weight' => array(
        0 => 'weight',
      ),
    ),
    'locked' => 0,
    'module' => 'physical',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'physical_weight',
  );

  return $field_bases;
}
