#include <stdio.h>
#define TABSPACE 8

int main(void) {
  int retval; 
  int cnt = 0;
  int cnt_space = 0;

  while ((retval = getc(stdin)) != EOF) {
    if (retval == '\n'){
      printf("\n");
      continue;
    }

    if(retval != '\t'){
      putchar(retval);
      cnt++;
      
    }else {
      if (cnt >= TABSPACE){
        cnt =0;
      }
      cnt_space = TABSPACE - cnt;
      cnt = 0;
    }

    while(cnt_space > 0 ) {
      putchar('#');
      cnt_space--;
    }
  } 

  printf("This is %d \n", retval);
  return 0;

}




/*
 *
 * 1. User launch the program ./detab
 *  - a user encounters a main loop that waits for user to type some
 *  character
 *  - User type something and program waits it until it detects the
 *  enterkey.
 *  - Program takes that input and process it as its requirements(detab)
 *
 *  1. How to launch something that waits for user to type something?
 *
 */
