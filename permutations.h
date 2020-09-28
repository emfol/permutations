#ifndef _PERMUTATIONS_H
#define _PERMUTATIONS_H
void string_permutations(char *str, int len, void (*cb)(char *));
void string_permutations_with_repetitions(char *set, char *str, int len, void (*cb)(char *));
#endif
