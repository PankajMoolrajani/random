#include <stdio.h>
/* print fahrenheit celsius table for fahr = 0,20,40...100 */
main(){
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper){
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d %6d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
