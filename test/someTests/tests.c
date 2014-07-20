#include <stdio.h>

#include "tests.h"
#include "toolkit.h"

#ifdef __cplusplus
extern "C" {
#endif

int runTests() {
#ifdef RELEASE
  puts("Hello release world tests");
#else
  puts("Hello debug world tests");
#endif
  toolkit_func();
  return 0;
}

#ifdef __cplusplus
}
#endif
