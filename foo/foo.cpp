#include <foo/foo.h>

#include <stdio.h>

void foo_print_version(void)
{
  #ifndef NDEBUG
    const char *m = "Debug";
  #else
    const char *m = "Not debug";
  #endif

  printf("This is foo version %s (%s)\n", FOO_VERSION, m);
}
