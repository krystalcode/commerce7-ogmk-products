<?php

/**
 * @file
 * Page callback file for the commerce_ogmk_products module.
 */

/**
 * Page callback for rendering the My Orders page in user account.
 *
 * @param object $user
 *   The user for whom to display the orders.
 */
function _commerce_ogmk_products_user_orders_page($user) {
  drupal_set_title('My Orders');

  /**
   * @Issue(
   *   "Display pending orders at the top with full details"
   *   type="feature"
   *   priority="normal"
   *   labels="ux"
   * )
   */
  $pendingOrdersBlock = views_embed_view('commerce_ogmk_user_orders', 'block', $user->uid);

  return theme('user_orders_page', array(
      'user' => $user,
      'pending_orders_block' => $pendingOrdersBlock,
  ));
}
