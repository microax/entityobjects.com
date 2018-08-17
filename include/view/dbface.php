<?php

/***********************************
 * dbface 
 *
 * @param $header
 * @param $url
 *
 * @author  mgill
 ***********************************
*/			
function dbface($header, $url)  
{
?>

<!DOCTYPE html>
<html lang="en">
  <head>
    <?php echo("<meta http-equiv=\"Refresh\" content=\"3; url=$url\">"); ?> 
  </head>
  <body>
  <br><br>
    <center>
      <table border="0">   
        <tr><td>
          <font size=+3>
            <?php echo($header); ?>
          </font>
          <br><br>
          <center>
            <img src="/images/eodb.png">
          </center>
        </td></tr>
      </table>
    </center>
  <br><br>
  </body>
</html>

<?php
}
?>
