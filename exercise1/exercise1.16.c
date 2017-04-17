#include <stdio.h>
#define MAXLINE 1000

int getnextline(char line[], int maxline);
void copy(char to[], char from[]);

main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  
  max = 0;
  while ((len = getnextline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {
    printf("Line length: %d, line: %s", (max+1), longest);
    if (longest[max-1] != '\n')
      printf("...\n");
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

void copy(char to[], char from[]) {
  int i;
  
  for (i=0; (to[i] = from[i]) != '\0'; ++i)
    ;
}