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
        'value' => '[node:ogmk_image]',
      ),
      'itemtype' => array(
        'value' => 'Product',
      ),
      'itemprop:description' => array(
        'value' => '[node:ogmk-text-with-summary:summary]',
      ),
      'itemprop:image' => array(
        'value' => '[node:ogmk_smi_google_plus]',
      ),
      'og:type' => array(
        'value' => 'product',
      ),
      'og:description' => array(
        'value' => '[node:ogmk-text-with-summary:summary]',
      ),
      'og:image' => array(
        'value' => '[node:ogmk_smi_facebook]',
      ),
      'product:price:amount' => array(
        'value' => '[node:ogmk-products-ref:0:commerce-price:amount_decimal]',
      ),
      'product:price:currency' => array(
        'value' => 'USD',
      ),
      'product:category' => array(
        'value' => '[node:ogmk_category_ref]',
      ),
      'product:condition' => array(
        'value' => 'New',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
      ),
      'twitter:description' => array(
        'value' => '[node:ogmk-text-with-summary:summary]',
      ),
      'twitter:image' => array(
        'value' => '[node:ogmk_smi_twitter]',
      ),
    ),
  );

  return $config;
}
