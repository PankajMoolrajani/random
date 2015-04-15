#include <stdio.h>
/*program that copies its input to its output one character at a time*/

main(){
  double nc;
  for (nc = 0; getchar() != EOF; nc++)
    ;
  printf("%0.f\n",nc);
}
