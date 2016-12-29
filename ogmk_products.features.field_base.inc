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

  // Exported field_base: 'ogmk_smi_facebook'.
  $field_bases['ogmk_smi_facebook'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_smi_facebook',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'storage_class' => array(
        'class_id' => 1,
        'current_class_id' => 1,
      ),
      'uri_scheme' => 'storage-ogmk-smi-facebook',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'ogmk_smi_google_plus'.
  $field_bases['ogmk_smi_google_plus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_smi_google_plus',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'storage_class' => array(
        'class_id' => 1,
        'current_class_id' => 1,
      ),
      'uri_scheme' => 'storage-ogmk-smi-google-plus',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'ogmk_smi_instagram'.
  $field_bases['ogmk_smi_instagram'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_smi_instagram',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'storage_class' => array(
        'class_id' => 1,
        'current_class_id' => 1,
      ),
      'uri_scheme' => 'storage-ogmk-smi-instagram',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'ogmk_smi_pinterest'.
  $field_bases['ogmk_smi_pinterest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_smi_pinterest',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'storage_class' => array(
        'class_id' => 1,
        'current_class_id' => 1,
      ),
      'uri_scheme' => 'storage-ogmk-smi-pinterest',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'ogmk_smi_twitter'.
  $field_bases['ogmk_smi_twitter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'ogmk_smi_twitter',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'storage_class' => array(
        'class_id' => 1,
        'current_class_id' => 1,
      ),
      'uri_scheme' => 'storage-ogmk-smi-twitter',
    ),
    'translatable' => 0,
    'type' => 'image',
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
