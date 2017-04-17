#include <stdio.h>

float convert(int fahr);

main() {
  int lower, upper, step;
  
  upper = 300;
  step = 20;

  for (lower = 0; lower <= upper; lower = lower + step) {
    printf("%3d\t%3.1f\n", lower, convert(lower));
  }
  return 0;
}

float convert(int fahr) { 
  return 5.0 * (fahr - 32) / 9.0;
}