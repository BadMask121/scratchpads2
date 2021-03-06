<?php

/**
 * @file
 * ecoint2.context.inc
 */
/**
 * Implements hook_context_default_contexts().
 */
function ecoint_context_default_contexts(){
  $context = new stdClass();
  $context->disabled = FALSE; /*
                               * Edit this to true to make a default context
                               * disabled initially
                               */
  $context->api_version = 3;
  $context->name = 'interactions';
  $context->description = 'Provides the ecological interactions search page';
  $context->tag = 'solr';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'interactions' => 'interactions'
      )
    )
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-pa0Er3HviUQyjP8dfbrsk1RU0gL0qrRv' => array(
          'module' => 'facetapi',
          'delta' => 'pa0Er3HviUQyjP8dfbrsk1RU0gL0qrRv',
          'region' => 'sidebar',
          'weight' => '-10'
        ),
        'facetapi-PCnS59XlcNSt7woFeylhjr86UAc94r0o' => array(
          'module' => 'facetapi',
          'delta' => 'PCnS59XlcNSt7woFeylhjr86UAc94r0o',
          'region' => 'sidebar',
          'weight' => '-6'
        ),
        'facetapi-Wr1e4IFwO0qbQnewTe4MUD1SvbKJLuUb' => array(
          'module' => 'facetapi',
          'delta' => 'Wr1e4IFwO0qbQnewTe4MUD1SvbKJLuUb',
          'region' => 'sidebar',
          'weight' => '-9'
        )
      )
    )
  );
  $context->condition_mode = 0;
  // Translatables
  // Included for use with string extractors like potx.
  t('Provides the ecological interactions search page');
  t('solr');
  $export['interactions'] = $context;
  return $export;
}
