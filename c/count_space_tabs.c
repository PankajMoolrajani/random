#include <stdio.h>

/*program to count blanks, tabs, and newlines*/

main(){
  int counter_blank;
  int counter_newlines;
  int counter_tabs;
  int text;

  counter_blank = 0;
  counter_newlines = 0;
  counter_tabs = 0;

  text = getchar();
  while (text != EOF){
    if (text == ' '){
      ++counter_blank;
    }
    else if (text = '\n'){
      ++counter_newlines;
    }
    else if (text == '\t'){
      ++counter_tabs;
    }
    text = getchar();
  }
  printf("\nNumber of Blanks: %d\n", counter_blank);
  printf("Number of NewLines: %d\n", counter_newlines);
  printf("Number of Tabs: %d\n\n", counter_tabs);
}
