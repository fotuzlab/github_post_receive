<?php

function github_post_receive_admin_settings(){
  
  $form['github_post_receive_ip_restriction'] = array(
    '#type' => 'textfield',
    '#title' => t('IP Restriction'),
    '#description' => t('Provide comma separated list of IPs for restricting the post'),
    '#size' => 40,
    '#default_value' => variable_get('github_post_receive_ip_restriction','127.0.0.1'),
    '#maxlength' => 255,
  );
  
  return system_settings_form($form);  
}
