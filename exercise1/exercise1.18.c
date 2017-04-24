#include <stdio.h>
#define MAXLINE 1000

int getnextline(char line[], int maxline);
int rtrim(char trim[], int len);

main() {
  int len;
  int max;
  char line[MAXLINE];
  
  max = 0;
  while ((len = getnextline(line, MAXLINE)) > 0) {
    if (rtrim(line, len) > 1)
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

int rtrim(char trim[], int len) {
  while (len > 0) {
     if (trim[len-1] == '\t' || trim[len-1] == ' ' || trim[len-1] == '\n')
       --len;
     else {
       trim[len] = '\0';
       return len+1;
    }
  }
  return len;
}