#include <stdio.h>

/* replacing each string of one or more blanks by a single blank */

main(){
  int text;
  text = getchar();
  while (text != EOF){
    if (text == ' '){
      putchar(' ');
      while (text == ' '){
        text = getchar();
      }
    }
    else{
      putchar(text);
      text = getchar();
    }
  }

}
