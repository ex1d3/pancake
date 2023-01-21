//crc64:531575bda31c00c7
//crc64_with_comments:0000000000000000
#include "runtime-headers.h"
#include "server/php-init-scripts.h"
#include "o_64/src_main594cc12a67f6b74d.h"
#include "runtime/ffi.h"
#include "dlfcn.h"

void global_init_php_scripts() noexcept ;
void init_php_scripts() noexcept ;

void const_vars_init() noexcept ;

void tl_str_const_init() noexcept ;
const char *get_php_scripts_version() noexcept {
  return "unknown";
}

char **get_runtime_options(int *count) noexcept {
  return nullptr;
}

void global_init_php_scripts()  noexcept {
  const_vars_init();
  ffi_env_instance = FFIEnv{1, 1};
  ffi_env_instance.funcs.dlopen = dlopen;
  ffi_env_instance.funcs.dlsym = dlsym;
  ffi_env_instance.libs[0].path = "libc.so.6";
  ffi_env_instance.symbols[0].name = "printf";
}

void f$src_main594cc12a67f6b74d$run()  noexcept {
  TRY_CALL_VOID (void, f$src_main594cc12a67f6b74d());
  finish (0, true);
}

void f$src_main594cc12a67f6b74d$global_reset()  noexcept {
  void f$src_main594cc12a67f6b74d$global_vars_reset();
  f$src_main594cc12a67f6b74d$global_vars_reset();
}

void init_php_scripts()  noexcept {
  void init_shape_demangler();
  init_shape_demangler();

  f$src_main594cc12a67f6b74d$global_reset();
  set_script (f$src_main594cc12a67f6b74d$run, f$src_main594cc12a67f6b74d$global_reset);
}
