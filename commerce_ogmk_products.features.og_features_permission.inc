<?php
/**
 * @file
 * commerce_ogmk_products.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function commerce_ogmk_products_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:shop:create product content'
  $permissions['node:shop:create product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:delete any product content'
  $permissions['node:shop:delete any product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:delete own product content'
  $permissions['node:shop:delete own product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update any product content'
  $permissions['node:shop:update any product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update own product content'
  $permissions['node:shop:update own product content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
