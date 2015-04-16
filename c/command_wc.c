#include <stdio.h>

/* linux 'wc' command to count number of lines and words in input */

#define IN 1
#define OUT 0

main(){
  int text, state;
  int nl, nw, nc;

  state = OUT;
  nl = nw = nc = 0;

  text = getchar();
  while (text != EOF){
    if (text == '\n'){
      ++nl;
    }
    if (text == ' ' || text == '\t' || text == '\n'){
      state = OUT;
    }
    else if (state == OUT){
      ++nw;
      state == IN;
    }
    ++nc;
    text = getchar();
  }
  printf("\n#lines = %d\n",nl);
  printf("#words = %d\n", nw);
  printf("#characters = %d\n\n", nc);
}
