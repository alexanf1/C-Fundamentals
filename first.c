// Introduction
//
// History
// * C was designed by Dennis Ritchie who was also the creator of UNIX
// * In fact, C was develop as a high level langauge to rewrite UNIX which
//   was originally written in assembly langauge
// * C89 is almost exclusive the most widely used versio of C
//
// What is C?
// * A multi-purpose language
// * Known as a system programming language. Used to write OS, debuggers, compilers, etc
// * User practically ewverywhere
//
// List of important compiler options to be aware of
// cl [source file] /nologo
//     - suppresses display of sign-on banner, in otherwords, copyright message and version number

// https://stackoverflow.com/questions/11150883/using-printf-function-without-actually-importing-stdio-h-and-it-worked-why-is
#include <stdio.h>
// cl /Wall first.c enables all warnings
// /nologo
// /W4
// TP
// (flags == switches)?

// This function represents the entry point into the program
// Note: This just represents that there are no params. It can be removed
int main(void)
{
  // compiler doesn't know about the function 'printf' and so the
  // approrpiate library containing the function needs linked
  printf("hello world!\n");

  return 0;
}
