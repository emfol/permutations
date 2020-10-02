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

void string_permutations_with_repetitions(char *set, char *arr, int len, void (*cb)(char *)) {
  register char c, *sp, *ap;
  int lst;
  if (len < 1) {
    (*cb)(arr);
    return;
  }
  lst = len - 1;
  ap = arr + lst;
  sp = set;
  while ((c = *sp) != '\0') {
    ++sp, *ap = c;
    string_permutations_with_repetitions(set, arr, lst, cb);
  }
}
