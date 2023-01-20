<?php

class Request {
  static function reciveRequest() {
    $data = array();
    if(isset($_GET["I"])) {
      $data[0] = $_GET["I"];
      echo $data[0];
    }
    if(isset($_GET["U"])) {
      $data[1] = $_GET["U"];
      echo $data[1];
    }
    if(isset($_GET["P"])) {
      $data[2] = $_GET["P"];
      echo $data[2];
    }

    return $data;
  }
}

Request::reciveRequest();
