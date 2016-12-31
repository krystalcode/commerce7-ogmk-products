<?php
/**
 * @file
 * ogmk_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer product pricing'.
  $permissions['administer product pricing'] = array(
    'name' => 'administer product pricing',
    'roles' => array(),
    'module' => 'commerce_product_pricing_ui',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle ogmk_product'.
  $permissions['create commerce_product entities of bundle ogmk_product'] = array(
    'name' => 'create commerce_product entities of bundle ogmk_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create ogmk_product content'.
  $permissions['create ogmk_product content'] = array(
    'name' => 'create ogmk_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ogmk_product content'.
  $permissions['delete any ogmk_product content'] = array(
    'name' => 'delete any ogmk_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ogmk_product content'.
  $permissions['delete own ogmk_product content'] = array(
    'name' => 'delete own ogmk_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle ogmk_product'.
  $permissions['edit any commerce_product entity of bundle ogmk_product'] = array(
    'name' => 'edit any commerce_product entity of bundle ogmk_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any ogmk_product content'.
  $permissions['edit any ogmk_product content'] = array(
    'name' => 'edit any ogmk_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle ogmk_product'.
  $permissions['edit own commerce_product entities of bundle ogmk_product'] = array(
    'name' => 'edit own commerce_product entities of bundle ogmk_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own ogmk_product content'.
  $permissions['edit own ogmk_product content'] = array(
    'name' => 'edit own ogmk_product content',
    'roles' => array(),
    'module' => 'node',
  );

  /**
   * @Issue(
   *   "Use OG permissions to determine access to orders"
   *   type="bug"
   *   priority="normal"
   *   labels="permissions, security"
   * )
   */
  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
      'merchant' => 'merchant',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle ogmk_product'.
  $permissions['view any commerce_product entity of bundle ogmk_product'] = array(
    'name' => 'view any commerce_product entity of bundle ogmk_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle ogmk_product'.
  $permissions['view own commerce_product entities of bundle ogmk_product'] = array(
    'name' => 'view own commerce_product entities of bundle ogmk_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  return $permissions;
}
