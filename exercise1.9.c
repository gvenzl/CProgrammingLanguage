#include <stdio.h>

main() {

  int c;
  int prev;
  
  while ((c = getchar()) != EOF) {
    if (c != ' ')
      putchar(c);
    if (c == ' ' && c != prev)
      putchar(c);
    prev = c;
  }
}