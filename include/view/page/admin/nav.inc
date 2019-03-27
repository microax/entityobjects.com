<?php

/***********************************
 * nav.inc 
 * @author  mgill
 ***********************************
*/			
function nav()
{
    //---------------------------------------------
    // collapse menu for small screens on click...
    //---------------------------------------------
    $datatoggle=" data-toggle=\"collapse\" data-target=\".navbar-collapse.in\"";
    //---------------------------------------------
    // navbar links...
    //---------------------------------------------
    $inbox    ="\"/admin/\"".$datatoggle;
    $faqcms   ="\"/admin/faq.php\"".$datatoggle;
    $download ="\"/admin/downloads.php\"".$datatoggle;
    $useradmin="\"/admin/users.php\"".$datatoggle;
    $chpasswd ="\"/admin/index.php?func=chpassword\"".$datatoggle;
    $logout   ="\"/admin/index.php?func=logout\"".$datatoggle;
?>
    <nav class="navbar navbar-default navbar-fixed-top">
      <div class="container">
        <div class="row">
          <div class="col-md-2">
            <div class="site-logo">
              <a href="/" class="brand">Entity<br><img src="/images/eodb.png" width="25" height="25" border="0">bjects</a>
            </div>
          </div>
          <div class="col-md-10">	 
            <div class="navbar-header">
              <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#menu">
                <i class="fa fa-bars"></i>
              </button>
            </div>
            <div class="collapse navbar-collapse" id="menu">
              <ul class="nav navbar-nav navbar-right">
                <?php if(isAdminLoginOK()) { echo "\n"; ?>
                <li><a href=<?php echo $inbox; ?>>Inbox</a></li>
                <li><a href=<?php echo $faqcms; ?>>FAQ-CMS</a></li>
                <li><a href=<?php echo $download; ?>>Download-Report</a></li>
                <?php if(hasPermission('canUserEdit')) { echo "\n"; ?>
                <li><a href=<?php echo $useradmin; ?>>User-Admin</a></li>
                <?php } echo "\n"; ?>
                <li class="dropdown">
                  <a class="dropdown-toggle " href="#" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                  Account-Options <span class="caret"></span>
                  </a>
                  <ul class="dropdown-menu">
                    <li><a class="dropdown-item" href=<?php echo $chpasswd; ?>>Change Password</a></li>
                    <li><a class="dropdown-item" href=<?php echo $logout; ?>>Logout</a></li>
                  </ul>
                </li>
                <?php } echo "\n"; ?>
              </ul>
            </div>
          </div>
        </div>
      </div>		
    </nav>
  <div id="home">
    <br><br><br>
  </div>
<?php
}
?>
