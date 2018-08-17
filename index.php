<?php
require "include/view/page/index/index.inc";
require "include/model/AdminFaqModel.php";

head();
nav();
about();
why();
$db   = new AdminFaqModel();
$faqs = $db->findAll(); 
faq($faqs);
contact();
foot();

?>



