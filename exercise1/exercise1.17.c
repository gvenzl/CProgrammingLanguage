#include <stdio.h>
#define MAXLINE 1000
#define MINIMUM 80

int getnextline(char line[], int maxline);

main() {
  int len;
  char line[MAXLINE];
  
  while ((len = getnextline(line, MAXLINE)) > 0) {
    if (len > MINIMUM) {
      printf("%s", line);
    }
  }
}

int getnextline(char s[], int limit) {
  int c, i;
  
  for (i=0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  
  s[i] = '\0';
  return i;
}
