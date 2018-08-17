<?php

/***********************************
 * views for entityobjects.com
 * /admin/users.php 
 *
 * @author  mgill
 ***********************************
*/			
$root = realpath($_SERVER['DOCUMENT_ROOT']);
require_once $root."/include/etc/config.php";

require_once "head.inc";
require_once "nav.inc";
require_once "viewusers.inc";
require_once "viewedituser.inc";
require_once "viewadduser.inc";
require_once "viewemail.inc";
require_once "foot.inc";

?>
