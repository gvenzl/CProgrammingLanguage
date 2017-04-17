#include <stdio.h>

main() {

  int nl = 0;
  int tab = 0;
  int space = 0;
  int c;
  
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++space;
    if (c == '\t')
      ++tab;
    if (c == '\n')
      ++ nl;
  }
  printf("Spaces: %d\n", space);
  printf("Tabs: %d\n", tab);
  printf("Newlines: %d\n", nl);
}