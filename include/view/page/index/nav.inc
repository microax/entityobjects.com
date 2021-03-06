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
    $what     ="\"#about\"".$datatoggle;
    $why      ="\"#why\"".$datatoggle;
    $download ="\"/download/\"".$datatoggle;
    $faq      ="\"#faq\"".$datatoggle;
    $contact  ="\"#contact\"".$datatoggle;
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
                <li><a href=<?php echo $what; ?>>What</a></li>
                <li><a href=<?php echo $why; ?>>Why</a></li>
                <li><a href=<?php echo $download; ?>>DOWNLOAD</a></li>
                <li><a href=<?php echo $faq; ?>>FAQ</a></li>
                <li><a href=<?php echo $contact; ?>>Contact</a></li>
              </ul>
            </div>
          </div>
        </div>
      </div>		
    </nav>
  <div id="home">
  </div>
<?php
}
?>
