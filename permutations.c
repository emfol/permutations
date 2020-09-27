#include "permutations.h"

static void swap(char *a, char *b) {
  char c = *a;
  *a = *b;
  *b = c;
}

void string_permutations(char *str, int len, void (*cb)(char *)) {
  int i, last, even;
  if (len < 2) {
    (*cb)(str);
    return;
  }
  last = len - 1;
  string_permutations(str, last, cb);
  even = len % 2 == 0;
  for (i = 0; i < last; ++i) {
    if (even) {
      swap(str + i, str + last);
    } else {
      swap(str, str + last);
    }
    string_permutations(str, last, cb);
  }
}
