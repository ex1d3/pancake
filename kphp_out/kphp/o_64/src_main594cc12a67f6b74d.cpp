//crc64:5a96a3c9a9fdec73
//crc64_with_comments:8864e29520c38ae4
#include "runtime-headers.h"
#include "o_64/src_main594cc12a67f6b74d.h"
#include "cl/C@scope@cdef@u8a3bc0265988dde8_0.h"
extern class_instance<C$FFI$Scope> v$ffi;

extern bool v$src_main594cc12a67f6b74d$called;

extern string v$const_string$us553e93901e462a6e;

extern string v$const_string$us5f82be0634142d8f;

extern string v$const_string$us73725d8dcf834823;

extern string v$const_string$usdb8f97a65f4778bd;

//source = [main.php]
//38: $ffi = FFI::cdef(
Optional < bool > f$src_main594cc12a67f6b74d() noexcept  {
  v$src_main594cc12a67f6b74d$called = true;
  v$ffi = ({
    ffi_load_scope_symbols(f$FFI$$load(v$const_string$us553e93901e462a6e), 0, 0, 1);
    f$FFI$$scope(v$const_string$us5f82be0634142d8f);
  });
//39:     "int printf(const char *format, ...);", //    C
//40:     "libc.so.6");
//41: //  printf()
//42: 
  FFI_CALL(reinterpret_cast<int32_t (*)(const char*, ...)>(ffi_env_instance.symbols[0].ptr)(ffi_php2c(v$const_string$usdb8f97a65f4778bd, ffi_tag<const char*>{}), ffi_vararg_php2c(v$const_string$us73725d8dcf834823)));
  return Optional<bool>{};
}


