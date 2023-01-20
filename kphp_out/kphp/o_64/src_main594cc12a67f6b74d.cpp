//crc64:2c738563574e534d
//crc64_with_comments:a12663e73ae701da
#include "runtime-headers.h"
#include "o_64/src_main594cc12a67f6b74d.h"
#include "o_64/Request@@reciveRequest.h"
extern bool v$src_main594cc12a67f6b74d$called;

//source = [main.php]
//3: class Request {
Optional < bool > f$src_main594cc12a67f6b74d() noexcept  {
  v$src_main594cc12a67f6b74d$called = true;
//11:     }
//12:     if(isset($_GET["P"])) {
//13:       $data[2] = $_GET["P"];
//14:     }
//15: 
//16:     return $data;
//17:   }
//18: }
//19: 
//20: Request::reciveRequest();
  f$Request$$reciveRequest();
  return Optional<bool>{};
}


