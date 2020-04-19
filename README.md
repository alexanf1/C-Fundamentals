Review material for the C programming language

Brief History Lesson
  * C was designed by Dennis Ritchie who was also the creator of UNIX.
  * In fact, C was develop as a high level langauge to rewrite UNIX which was originally written in assembly langauge.
  * C89 is nearly the exclusive and most widely used version of C today.

What is C?
  * A general or multi-purpose language. Not tied to a specific domain.
  * Known as a system programming language. Has been used to write operating systems, debuggers, compilers, etc.
  
Important Compiler Options
* `cl [source file] /nologo`
  * suppresses display of a sign-on banner. In otherwords, hides copyright messages and version numbers from output.
* `cl [source file] /W4`
  * display all warnings that aren't off by default. 
  * `/W0`,`/W1`,`/W2`,`/W3` are also options with different levels of reporting.
* `cl [source file] /Wall`
  * display all warnings including those turned off by default.
* `cl [source file] /TP`
  * specifies all source files are C++. This check against the C++ compiler insures portability if used in a C++ program.
