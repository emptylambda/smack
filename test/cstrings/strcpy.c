
#include <strings.h>
#include "smack.h"

// @flag --unroll=5
// @expect verified

int main() {
  const char *word = "Roof";
  char container[5];
  
  strcpy(container,word);
  assert(strlen(container) == 4);
  assert(strcmp(container,word) == 0);
  return 0;
}

