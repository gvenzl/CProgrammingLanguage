#include <stdio.h>

/* Print Fahrenheit-Celsius table */

main() {

  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  celsius=lower;
  printf("Celsius Fahrenheit\n");
  while (celsius<=upper) {
    fahr = (celsius * 9.0 / 5.0)+ 32;
    printf("%6.0f     %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}