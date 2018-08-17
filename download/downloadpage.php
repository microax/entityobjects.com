<?php
//---------------------------------
// load download files  page
//----------------------------------

//----------------------------------------
// first we're gonna check user session
// (start one if need be)
//----------------------------------------
require_once "../include/etc/session.php";
siteSession();

//-------------------------------------
// don't show download files to random
// bums, bots or squiddy's :-)
//-------------------------------------
if(!isCaptchaOK())
    redirect("/download/");

//----------------------------------------
// get all the files ready for download
//----------------------------------------
require_once "../include/model/GetAllSoftwareModel.php";
$db    = new GetAllSoftwareModel();
$files = $db->select(); 

//--------------------------------------
// now view the download files page...
//--------------------------------------
require_once "../include/view/page/download/downloadpage.inc";
head();
nav();
downloadFiles($files);
foot();
?>
