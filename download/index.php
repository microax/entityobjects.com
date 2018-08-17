<?php
//---------------------------------
// load download form page
//----------------------------------
require_once "../include/view/page/download/index.inc";
require_once "../include/etc/session.php";
siteSession();

if(isCaptchaOK())
    redirect("/download/downloadpage.php");
    
head();
nav();
download();
foot();
?>
