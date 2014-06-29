
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "strdup.h"

int
main(void) {
  char string[] = "hello world";
  char *copy = strdup(string);
  assert(copy);
  assert(0 == strcmp("hello world", copy));
  assert(11 == strlen(copy));
  free(copy);
  return 0;
}
