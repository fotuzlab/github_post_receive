<?php

/**
  Implements hook_rules_event_info()

*/

function github_post_receive_rules_event_info() {
  $events['github_post_receive_'] = array(
    'label' => t('Github event on push'),
    'group' => t('Github Post Receive'),
    'variables' => array(
      'github_push_data' => array(
        'type' => 'text',
        'label' => t('github push data'),
      ),
    ),
  );
  return $events;
}

/**
  Implements hook_rules_action_info()
*/
function github_post_receive_rules_action_info() {
/*  $actions = array(
    // The base-level keys in the array are the machine names for the actions,
    // and by default also the function name for the action callback. Prefix
    // with your module name to avoid name conflicts.
    'rules_example_action_hello_world' => array(
      'label' => t('Print Hello world on the page'), // Name displayed to admins
      'group' => t('Rules examples'), // Used for grouping actions in select lists
    ),
  );  
  return $actions;  
*/
}