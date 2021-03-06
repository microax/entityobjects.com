<?php

/***********************************
 * download.inc 
 * @author  mgill
 ***********************************
*/			
function download()  
{
?>
  <section id="contact">
    <div class="contact-page">
      <div class="container">
        <div class="center">
          <br><br><br>
          <h2>Download</h2>						
        </div> 
      <div class="row contact-wrap">						
        <div class="status alert alert-success" style="display: none"></div>
          <form id="main-contact-form" class="contact-form" name="contact-form" method="post" action="/download/download.php">
            <div class="wow fadeInDown">
              <div class="col-sm-5 col-sm-offset-3">
                <div class="form-group">
                  <label>Name *</label>
                  <input type="text" name="name" class="form-control" required="required">
                </div>
                <div class="form-group">
                  <label>Email *</label>
                  <input type="email" name="email" class="form-control" required="required">
                </div>
                <div class="form-group">
                  <label>Phone</label>
                  <input type="text" name="phone" class="form-control">
                </div>
                <div class="form-group">
                  <label>Company Name</label>
                  <input type="text" name="company" class="form-control">
                </div>                        
                <div class="form-group">
                  <button type="submit" name="submit" class="btn btn-primary btn-lg" required="required">Download Now!</button>
                </div>
              </div>
            </div>
          </form> 
        </div>	      
      </div>
    </div>
  </section>

<?php
}
?>
