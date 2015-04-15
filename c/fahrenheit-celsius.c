#include <stdio.h>
/* print fahrenheit celsius table for fahr = 0,20,40...100 */
main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahrenhiet      Celsius\n");
  while (fahr <= upper){
    celsius = (5.0/6.0) * (fahr - 32.0);
    printf("%3.0f %18.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
