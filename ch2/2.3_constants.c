#include <stdio.h>
#define VTAB '\013' /*Move cursor to below line. Equivalent to Shift+Enter*/
#define BELL '\007' /*Alert sound. Only work in iTerm*/
#define VTABHEX '\xb'
#define BELLHEX '\x7'
#define MAXLINE 1000

int main()
{
  printf("%c\n", BELL);
  printf("\a"); /*Another way to call Bell character*/
  printf("Before vertical tab\v");
  printf("After vertical tab\n");

  // Octal digits
  printf("%o\n", '\0');   /*0*/
  printf("\101\n");       /*A*/
  printf("%o\n", '\123'); /*123*/
  printf("\123 \n");      /*S*/

  // Hexadecimal digits
  printf("%x\n", '\x0'); /*0*/
  printf("%x\n", '\xa'); /*a*/
  printf("%X\n", '\xa'); /*A*/
  printf("%x\n", '\xA'); /*a*/
  printf("\x41\n");      /*A*/
  /*printf("'\x0'\n"); warning: format string contains '\0' within the string body */

  // String
  // '\0' numeric value is 0
  printf("%d\n", '\0' == 0);
  // Concatenation
  printf("Hello, "
         "World\n");
  // Constant expression may be evaluated at during compilation
  printf("%d\n", MAXLINE - 1);

  // Enumeration
  enum months
  {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
  };
  printf("%d\n", JAN);
}