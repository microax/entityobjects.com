<?php
//---------------------------------
// load admin/page
//----------------------------------
require_once "../include/view/page/admin/index.inc";
require_once "../include/etc/session.php";
require_once "../include/controller/admin/admin.inc";
siteSession();

if(getRequest("resetuser"))
{
    resetUser();
}
elseif(getRequest("activate") =="yes")
{
    activateUser();
}
elseif(getRequest("unsubscribe") =="yes")
{
    unsubscribeUser();
}
else
{
    redirect("/");
}

function resetUser()
{
    head();
    nav();
    userResetForm(getRequest("user"), getRequest("resetuser"));
    foot();
}

function activateUser()
{
   require_once "../include/model/UserLoginModel.php";
   
    $username = getRequest("username");
    $password = getRequest("password");
    $password2= getRequest("password2");
    $resetCode= getRequest("reset_code");

    if($password == $password2)
    {
        $db = new UserLoginModel();
        
        if($db->resetUserLogin($username, $password, $resetCode))
        {
            redirect("/admin/");
            return;
        }
    }
    
    head();
    nav();
    userResetForm($username, $resetCode);
    foot();
}


function unsubscribeUser()
{
    require "../include/view/views.php";
    require "../include/model/ContactModel.php";

    $username = getRequest("username");
    $userid   = getRequest("userid");
    $first    = getRequest("first");
    $last     = getRequest("last");

    $contact                 = new Contact("");
    $contact->contactName    = $first." ".$last;
    $contact->contactEmail   = $username;
    $contact->contactPhone   = "N/A";
    $contact->contactCompany = "";
    $contact->contactSubject = "UNSUBSCRIBE";
    $contact->contactMessage = "<a href=/admin/users.php?func=edit&id=".$userid.">".$username."</a>";

    $contact->contactCreated = sqlNow();
    $contact->contactModified= sqlNow();
    $contact->contactSource  = "UNSUBSCRIBE";
    $contact->contactStatus  = "UNREAD";
    $contact->contactId      = null;

    $db = new ContactModel();
    $db->insert($contact);

    dbface("Unsubcribe request sent", "/");  

}


?>
