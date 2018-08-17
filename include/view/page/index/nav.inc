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
                <li><a href="#home">What</a></li>
                <li><a href="#why">Why</a></li>
                <li><a href="/download/">DOWNLOAD</a></li>
                <li><a href="#faq">FAQ</a></li>
                <li><a href="#contact">Contact</a></li>
              </ul>
            </div>
          </div>
        </div>
      </div>		
    </nav>
  <div id="home">
    <br><br>
  </div>

<?php
}
?>
