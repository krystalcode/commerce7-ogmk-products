<?php
/**
 * @file
 * ogmk_products.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ogmk_products_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:ogmk_product.
  $config['node:ogmk_product'] = array(
    'instance' => 'node:ogmk_product',
    'config' => array(
      'description' => array(
        'value' => '[node:ogmk-text-with-summary:summary]',
      ),
      'image_src' => array(
        'value' => '[node:ogmk_images:1110]',
      ),
      'itemtype' => array(
        'value' => 'Product',
      ),
      'itemprop:description' => array(
        'value' => '[node:ogmk-text-with-summary:summary]',
      ),
      'itemprop:image' => array(
        'value' => '[node:ogmk_images:1110]',
      ),
      'og:type' => array(
        'value' => 'product',
      ),
      'og:description' => array(
        'value' => '[node:ogmk-text-with-summary:summary]',
      ),
      'og:image' => array(
        'value' => '[node:ogmk_images:1110]',
      ),
      'product:price:amount' => array(
        'value' => '[node:ogmk-products-ref:0:commerce-price:amount_decimal]',
      ),
      'product:price:currency' => array(
        'value' => 'USD',
      ),
      'product:retailer_title' => array(
        'value' => 'The Golden Silver Hands',
      ),
      'product:category' => array(
        'value' => '[node:ogmk_category_ref]',
      ),
      'product:weight:value' => array(
        'value' => '[node:ogmk-products-ref:0:ogmk-weight:weight]',
      ),
      'product:weight:units' => array(
        'value' => '[node:ogmk-products-ref:0:ogmk-weight:unit]',
      ),
      'product:condition' => array(
        'value' => 'New',
      ),
      'twitter:card' => array(
        'value' => 'product',
      ),
      'twitter:description' => array(
        'value' => '[node:ogmk-text-with-summary:summary]',
      ),
      'twitter:image' => array(
        'value' => '[node:ogmk_images:1110]',
      ),
    ),
  );

  return $config;
}
