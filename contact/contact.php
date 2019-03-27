<?php

require_once "../include/etc/session.php";
siteSession();

if(isCaptchaOK())
{
    //------------------------------
    // CAPTCHA validated...
    //------------------------------
    require "../include/etc/sql.php";
    require "../include/view/views.php";
    require "../include/model/ContactModel.php";

    $contact                 = new Contact("");
    $contact->contactName    = $_SESSION['contactName'];
    $contact->contactEmail   = $_SESSION['contactEmail'];
    $contact->contactPhone   = $_SESSION['contactPhone'];
    $contact->contactCompany = $_SESSION['contactCompany'];
    $contact->contactSubject = $_SESSION['contactSubject'];
    $contact->contactMessage = $_SESSION['contactMessage'];

    $contact->contactCreated = sqlNow();
    $contact->contactModified= sqlNow();
    $contact->contactSource  = "CONTACT_FORM";
    $contact->contactStatus  = "UNREAD";
    $contact->contactId      = null;

    $db = new ContactModel();
    $db->insert($contact);

    dbface("Thank You!", "/");  
}
else
{
    //------------------------------
    // CAPTCHA not validated yet...
    //------------------------------
    require "../include/view/page/captcha/index.inc";
    $_SESSION['contactName']    = $_REQUEST['name'];
    $_SESSION['contactEmail']   = $_REQUEST['email'];
    $_SESSION['contactPhone']   = $_REQUEST['phone'];
    $_SESSION['contactCompany'] = $_REQUEST['company'];
    $_SESSION['contactSubject'] = $_REQUEST['subject'];
    $_SESSION['contactMessage'] = $_REQUEST['message'];
    
    $_SESSION['captchaPage']    = "/contact/contact.php";

    //--------------------------------
    // This is the captcha page...
    //--------------------------------
    redirect("/captcha/getcaptcha.php"); 
}
?>


