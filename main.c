#include <string.h>
#include <stdio.h>
#include "permutations.h"

#define MAXLEN 8

int main(int argc, char **argv) {
  char buf[MAXLEN + 1], *str;
  if (argc < 2) {
    fputs("A string is expected\n", stderr);
    return 1;
  }
  str = *(argv + 1);
  if (strlen(str) > MAXLEN) {
    fprintf(stderr, "The given string is too big (max: %d)\n", MAXLEN);
    return 2;
  }
  strncpy(buf, str, MAXLEN);
  buf[MAXLEN] = '\0';
  string_permutations(buf, strlen(buf), (void (*)(char *))puts);
  return 0;
}

