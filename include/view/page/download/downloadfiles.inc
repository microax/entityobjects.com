<?php

/***********************************
 * downloadFiles.inc 
 * @author  mgill
 ***********************************
*/			
function downloadFiles($files)  
{
?>
  <section id="downloadfiles">
    <div class="container">
      <div class="center">
        <div class="col-md-6 col-md-offset-3">
	  <br><br><br>
	  <center>
            <h3>click on link to download</h3>
            <?php
                foreach($files as $s)
	            echo "<a href=\"/download/zipviewer.php?id={$s->softwareId}\">{$s->softwareFileName}</a><br>";
            ?>
          </center>
          <br><br><br>
        </div>
      </div>
    </div>	
  </section>
<?php
}
?>
