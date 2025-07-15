#include <stdio.h>
#define TABSPACE 8

int main(void) {
  int retval; 
  int cnt = 0;

/*
 * Case that you have to think about
 * When getchar encounters :
 *   1.enter key
 *   2.tab
 *   3.backspace
 *   4.Regular char
 */
  while ((retval = getc(stdin)) != EOF) {
    if(retval == '\t'){

      do {
        putchar(' ');
      }while((++cnt % TABSPACE) != 0);

    }else if (retval == '\n' || retval == '\r'){
      putchar(retval);
      cnt = 0;
    }else if (retval == '\b'){
      (cnt > 0) && (cnt--);
      putchar(retval);
    }else{
      cnt++;
      putchar(retval);
    }
  }

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
