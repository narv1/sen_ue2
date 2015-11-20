#include <stdlib.h>
#include <stdio.h>
#include "myString.h"

/**********************************/
/*      Testprogramm für 1.4      */
/**********************************/

int main (){

  printf("Dieses Programm testet die 1.Uebung.\n");  //Erklärung

  char  test[100];
  char *p;
  
  fgets( test, 100, stdin);

  p = &test;
  
  strlength(*p);

  /*
  strmirror();

  strsearch();

  strreplace();

  strsubstr();

  */

  return 0;
}
