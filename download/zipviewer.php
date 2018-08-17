<?php

require_once "../include/etc/session.php";
siteSession();

if(isCaptchaOK())
{
    //------------------------------
    // CAPTCHA validated...
    //------------------------------
    require "../include/model/SoftwareModel.php";
    require "../include/model/DownloadModel.php";
    require "../include/etc/sql.php";

    //------------------------------------------
    // We're gonna assume this was called with
    // a software.softwareId ...
    //
    // anyways, we're gonna insert a new
    // download record
    //------------------------------------------
    $id = $_REQUEST['id'];
    $ua = $_SERVER['HTTP_USER_AGENT'];
    $ip = $_SERVER['REMOTE_ADDR'];

    $uaInfo = get_browser(null,true);
    $download                   = new Download("");
    $download->downloadUserAgent= $ua;
    $download->downloadOs       = $uaInfo['platform'];
    $download->downloadBrowser  = $uaInfo['browser'];
    $download->downloadVersion  = $uaInfo['version'];
    $download->softwareId       = $id;
    $download->contactEmail     = $_SESSION['contactEmail'];
    $download->downloadIpAddress= $ip;
    $download->downloadCreated  = sqlNow();
    $download->downloadModified = sqlNow();
    $download->downloadStatus   = "OK";
    $download->downloadId       = null;

    $db = new DownloadModel();
    $db->insert($download);

    //--------------------------------------
    // OK, now we can send this person the
    // zipfile they been asking for...
    //---------------------------------------
     $db = new SoftwareModel();
     $r = $db->find($id);
     header("Content-Type: application/zip");
     //header("Content-Length: " . strlen($r[0]->softwarePayload));
     header("Content-Disposition: attachment; filename={$r[0]->softwareFileName}");
     echo $r[0]->softwarePayload;
}
else
{
    //--------------------------------------
    // go HOME!
    // (somebody trying to scam a download)
    //--------------------------------------
    redirect("/"); 
}
?>


