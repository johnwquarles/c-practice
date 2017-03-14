#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main(void)
{
  float fahr, celsius;
  int lower = -20;
  int upper = 150;
  int step = 10;

  celsius = lower;
  printf("==============\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
}
