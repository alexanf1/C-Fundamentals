// https://stackoverflow.com/questions/11150883/using-printf-function-without-actually-importing-stdio-h-and-it-worked-why-is
#include <stdio.h>

// This function represents the entry point into the program
// Note: 'void' simply represents that there are no parameters. This keyword can be dropped.
int main(void)
{
  // compiler itself doesn't know about the function 'printf' and so the
  // approrpiate library containing the function needs to be included
  printf("hello world!\n");

  return 0;
}
