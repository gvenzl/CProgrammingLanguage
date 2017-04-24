#include <stdio.h>
#define MAXLINE 1000

int getnextline(char line[], int maxline);
void reverse(char line[]);
void copy(char to[], char from[]);

main() {
  int len;
  int max;
  char line[MAXLINE];
  
  max = 0;
  while ((len = getnextline(line, MAXLINE)) > 0) {
    reverse(line);
    printf("%s\n", line);
  }
  return 0;
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
  
  for (i = 0; ((to[i] = from[i]) != '\0'); ++i)
    ;
  
  to[i] = '\0';
}

void reverse(char line[]) {
  int len;
  int i;
  
  for (len=0; line[len] != '\0'; ++len)
    ;

  char reverse[len+1];

  for (i = len; i >= 0; --i)
    reverse[len-i] = line[i-1];
  reverse[len+1] = '\0';
  
  copy(line, reverse);
}