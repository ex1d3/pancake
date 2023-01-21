<?php

// class Request {
//     public static function reciveRequest() {
//         $data = array(): array;
//         if(isset($_GET["I"])) {
//             $data[0] = $_GET["I"];
//             echo $data[0];
//         }   
//         if(isset($_GET["U"])) {
//             $data[1] = $_GET["U"];
//             echo $data[1];
//         }
//         if(isset($_GET["P"])) {
//             $data[2] = $_GET["P"];
//             echo $data[2];
//         }
//         return $data;
//     }

//     public static function answerToRequest(array $data): string {
//         string $answer = Ssh:makeConnection($data);
//         if($answer != "bad") {

//         }
//     }

// }

// class Ssh {
//     static function makeConnection(array $data): string {
//         string|bool $connection = ssh2_connect();
//     }
// }

// Request::reciveRequest();

$ffi = FFI::cdef(
    "int printf(const char *format, ...);", // это стандартная декларация C
    "libc.so.6");
// вызываем printf()
$ffi->printf("Привет, %s!\n", "мир");