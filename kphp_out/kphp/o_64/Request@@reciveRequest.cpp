//crc64:3c29b89b39b6921a
//crc64_with_comments:7fbd6c64bc3feadf
#include "runtime-headers.h"
#include "o_64/Request@@reciveRequest.h"
extern mixed v$_GET;

extern string v$const_string$us792c50047947a859;

extern string v$const_string$usa4d0939a523b166f;

extern string v$const_string$uscd156e57d3b74582;

extern array< Unknown > v$const_array$us68788cf2824807c5;

//source = [main.php]
//4:   static function reciveRequest() {
array< mixed > f$Request$$reciveRequest() noexcept  {
  array< mixed > v$data;
//5:     $data = array();
  v$data = v$const_array$us68788cf2824807c5;
//6:     if(isset($_GET["I"])) {
  if ((v$_GET).isset (v$const_string$uscd156e57d3b74582, 4112944471019094089_i64)) {
//7:       $data[0] = $_GET["I"];
    (v$data).set_value (0_i64, v$_GET.get_value (v$const_string$uscd156e57d3b74582, 4112944471019094089_i64));
//8:       echo $data[0];
    {
      f$echo(f$strval (v$data.get_value (0_i64)));
    };
  };
//9:     }
//10:     if(isset($_GET["U"])) {
  if ((v$_GET).isset (v$const_string$usa4d0939a523b166f, 4112944471019094101_i64)) {
//11:       $data[1] = $_GET["U"];
    (v$data).set_value (1_i64, v$_GET.get_value (v$const_string$usa4d0939a523b166f, 4112944471019094101_i64));
//12:       echo $data[1];
    {
      f$echo(f$strval (v$data.get_value (1_i64)));
    };
  };
//13:     }
//14:     if(isset($_GET["P"])) {
  if ((v$_GET).isset (v$const_string$us792c50047947a859, 4112944471019094096_i64)) {
//15:       $data[2] = $_GET["P"];
    (v$data).set_value (2_i64, v$_GET.get_value (v$const_string$us792c50047947a859, 4112944471019094096_i64));
//16:       echo $data[2];
    {
      f$echo(f$strval (v$data.get_value (2_i64)));
    };
  };
//17:     }
//18: 
//19:     return $data;
  return v$data;
}


