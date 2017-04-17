#include <stdio.h>

#define MAX_WORD_LENGTH 20

main() {

  int i, c, length;
  int wlength[MAX_WORD_LENGTH];
  int helper;
  
  /* Initialize array */
  for (i = 0; i < MAX_WORD_LENGTH; ++i) {
    wlength[i] = 0;
  }

  length = 0;
  
  while ((c = getchar()) != EOF) {
    /* Out of word */
    if (c == ' ' || c == '\t' || c == '\n') {
      if (length <= MAX_WORD_LENGTH) {
        /* Increment counter for words with length */
        ++wlength[length-1];
        /* Set counter for word length back to 0 */
      }
      length = 0;
    }
    else {
      /* Increment word length by one */
      ++length;
    }
  }
  
  /* Print results */
  
  for (i = 0; i < MAX_WORD_LENGTH; ++i) {
    printf("Length %2d: ", i+1);
    for (helper = 0; helper < wlength[i]; ++helper) {
      printf(" *");
    }
    printf("\n");
  }
}