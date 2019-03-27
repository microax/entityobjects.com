<?php
/***********************************
 * config.php
 * @author  mgill
 ***********************************
*/			

function systemEmail()
{
    $admins = array('mgill@metaqueue.net');
    return($admins);
}

function pubServerAddress()
{
    return("http://entityobjects.com");
}

function smtpConfig()
{
    return("/opt/install/PHPMailer/PHPMailer.json");
}

function configValidPhotoExtensions()
{
    $validExtensions =  ['jpg', 'jpeg', 'png', 'gif'];
    return($validExtensions);
}

function configValidMediaExtensions()
{
    $validExtensions = ['mp3', 'mp4a'];
    return($validExtensions);
}

function configMaxUploadSize()
{
    // I'm not sure how I got this number LOL
    //---------------------------------------
    return(2097152);
}

?>
