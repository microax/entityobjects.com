<?php
require_once "EntityObjectsDB.php";
require      "DownloadReport.php";

/********************************************************************
 * DownloadReportModel inherits EntityObjectsDB and provides the select() 
 * function which maps the DownloadReport class/VIEW in entityobjectsDB.
 *
 * @author  mgill
 * @version 180722
 *********************************************************************
 */
class DownloadReportModel extends EntityObjectsDB
{
    /*********************************************************
     * Returns  DownloadReport VIEW
     *
     * @return downloadReport
     *********************************************************
     */
    public function select()
    {
        $query="SELECT ".
                      "downloadOs,".
                      "downloadBrowser,".
                      "softwareVersion,".
                      "count ".                      		               
	       "FROM downloadReport ";
        return($this->selectDB($query, "DownloadReport"));
    }
}

?>