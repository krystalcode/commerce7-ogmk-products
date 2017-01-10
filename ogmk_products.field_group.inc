<?php
/**
 * @file
 * ogmk_products.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ogmk_products_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col1|node|ogmk_product|form';
  $field_group->group_name = 'group_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row1';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '9',
    'children' => array(
      0 => 'title_field',
      1 => 'ogmk_text_with_summary',
      2 => 'ogmk_text_long',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Column 1',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-col1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_col1|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col2|node|ogmk_product|form';
  $field_group->group_name = 'group_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row2';
  $field_group->data = array(
    'label' => 'Column 2',
    'weight' => '8',
    'children' => array(
      0 => 'ogmk_products_ref',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Column 2',
      'instance_settings' => array(
        'panelize' => '1',
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-col2 field-group-bootstrap_grid_col',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_col2|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col3|node|ogmk_product|form';
  $field_group->group_name = 'group_col3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row3';
  $field_group->data = array(
    'label' => 'Column 3',
    'weight' => '8',
    'children' => array(
      0 => 'ogmk_images',
      1 => 'ogmk_image',
      2 => 'ogmk_smi_facebook',
      3 => 'ogmk_smi_google_plus',
      4 => 'ogmk_smi_instagram',
      5 => 'ogmk_smi_pinterest',
      6 => 'ogmk_smi_twitter',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Column 3',
      'instance_settings' => array(
        'panelize' => '1',
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-col3 field-group-bootstrap_grid_col',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_col3|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col4|node|ogmk_product|form';
  $field_group->group_name = 'group_col4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row4';
  $field_group->data = array(
    'label' => 'Column 4',
    'weight' => '10',
    'children' => array(
      0 => 'ogmk_category_ref',
      1 => 'ogmk_labels_ref',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Column 4',
      'instance_settings' => array(
        'panelize' => '1',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-col4 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_col4|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col5|node|ogmk_product|form';
  $field_group->group_name = 'group_col5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row5';
  $field_group->data = array(
    'label' => 'Column 5',
    'weight' => '11',
    'children' => array(
      0 => 'ogmk_paragraphs',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Column 5',
      'instance_settings' => array(
        'panelize' => '1',
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-col5 field-group-bootstrap_grid_col',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_col5|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1|node|ogmk_product|form';
  $field_group->group_name = 'group_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'group_col1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-row1 field-group-bootstrap_grid_row',
        'description' => 'Enter the title and the description of the product as they will show to the visitors.',
      ),
    ),
  );
  $field_groups['group_row1|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row2|node|ogmk_product|form';
  $field_group->group_name = 'group_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Variants',
    'weight' => '1',
    'children' => array(
      0 => 'group_col2',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Variants',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-row2 field-group-bootstrap_grid_row',
        'description' => 'Add a variant for each variation in size, color etc. that the product has available.',
      ),
    ),
  );
  $field_groups['group_row2|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row3|node|ogmk_product|form';
  $field_group->group_name = 'group_row3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '2',
    'children' => array(
      0 => 'group_col3',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-row3 field-group-bootstrap_grid_row',
        'description' => 'Add images of the product as they will be shown to visitors. You can add as many images as you like, although 3-6 images is a good number.',
      ),
    ),
  );
  $field_groups['group_row3|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row4|node|ogmk_product|form';
  $field_group->group_name = 'group_row4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories & Labels',
    'weight' => '3',
    'children' => array(
      0 => 'group_col4',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Categories & Labels',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-row4 field-group-bootstrap_grid_row',
        'description' => 'Choose one of the predefined categories that product should be classified under. You can also add labels for custom classification.',
      ),
    ),
  );
  $field_groups['group_row4|node|ogmk_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row5|node|ogmk_product|form';
  $field_group->group_name = 'group_row5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ogmk_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paragraphs',
    'weight' => '4',
    'children' => array(
      0 => 'group_col5',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Paragraphs',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-row5 field-group-bootstrap_grid_row',
        'description' => 'You may optionally add any additional content paragraphs such as content lists, block references, or additional text.',
      ),
    ),
  );
  $field_groups['group_row5|node|ogmk_product|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories & Labels');
  t('Column 1');
  t('Column 2');
  t('Column 3');
  t('Column 4');
  t('Column 5');
  t('Details');
  t('Images');
  t('Paragraphs');
  t('Variants');

  return $field_groups;
}
