#include <stdio.h>

#define MAX_CHARS 256

main() {

  int c, i, helper;
  
  int chars[MAX_CHARS];
  
  for (i = 0; i < MAX_CHARS; ++i) {
    chars[i] = 0;
  }
  
  while ((c = getchar()) != EOF) {
    ++chars[c];
  }
  
  for (i = 0; i < MAX_CHARS; ++i) {
    if (chars[i] != 0) {
      printf("Char \"%c\": ", i);
      for (helper = 0; helper < chars[i]; ++helper) {
        printf(" *");
      }
      printf("\n");
    }
  }
}