<?php

/***********************************
 * why.inc 
 * @author  mgill
 ***********************************
*/			
function why()  
{
?>
  <section id="why">
    <div class="container">
      <div class="center">
        <br><br><br>
        <div class="col-md-6 col-md-offset-3">
          <h2>ORM</h2>
          <hr>					
          <p class="lead">Object-relational mapping (ORM) is a technique that lets you query and manipulate data from a database using an object-oriented paradigm.
	    When talking about ORM, most people are referring to a library that implements the Object-Relational Mapping technique, hence the phrase "an ORM". 
	  </p>
	  <p class="lead">This free-open-source and super easy to use ORM tool generates beautiful PHP classes based on your database's meta-data.
	    <br>Like this:</p>
<pre>
/*
 * Returns a Contact by contactId
 * @param  $id
 * @return $contact
 */
public function find($id)
{
    $q="".

    "SELECT contactId,".
           "contactName,".
	   "contactEmail,".
	   "contactPhone,".
	   "contactSubject,".
	   "contactMessage,".
	   "contactCreated,".
	   "contactModified,".
	   "contactSource,".
	   "contactStatus ".
    "FROM  contact ".
    "WHERE contactId=".$id;

    $r=$this->selectDB($q,"Contact");
    return($r);
}
</pre>
          <center>
	  <p class="lead">
	    <a href="/download/">
	      <button type="submit" name="submit" class="btn btn-primary btn-lg" >DOWNLOAD NOW</button>
	    </a>
	  </p>
	  </center>
        </div>
      </div>
    </div>
  </section>

<?php
}
?>
