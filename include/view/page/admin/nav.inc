<?php

/***********************************
 * nav.inc 
 * @author  mgill
 ***********************************
*/			
function nav()
{
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
                <li><a href="/admin/">Inbox</a></li>
                <li><a href="/admin/faq.php">FAQ-CMS</a></li>
                <li><a href="/admin/downloads.php">Download-Report</a></li>
                <?php if(hasPermission('canUserEdit')) { echo "\n"; ?>
                <li><a href="/admin/users.php/">User-Admin</a></li>
                <?php } echo "\n"; ?>
                <li class="dropdown">
                  <a class="dropdown-toggle " href="#" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                  Account-Options <span class="caret"></span>
                  </a>
                  <ul class="dropdown-menu">
                    <li><a class="dropdown-item" href="/admin/index.php?func=chpassword">Change Password</a></li>
                    <li><a class="dropdown-item" href="/admin/index.php?func=logout">Logout</a></li>
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