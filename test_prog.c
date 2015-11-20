
/*******************************************************************************************/
/*                           Willkommen zum ersten Projekt!                                */
/*               Dieses Programm zielt darauf ab einen besseren Umgang mit:                */
/*                          Übungen mit Vektoren und Matrizen                              */
/*                                     -Arrays                                             */
/*                    -Verbesserung der Eingabe der Stringzerlegung                        */
/*                   -Berechnung einfacher mathematischer Sachverhalte                     */
/*******************************************************************************************/


/*******************************************************************************************/
/*                               Author: Stefan Hermeter                                   */
/*                                  Klasse:5/6 ABETI                                       */
/*                                 Datum:  14.11.2015                                      */
/*******************************************************************************************/


/*****************************************/
/*      Die verwendeten Libaries         */
/* bzw. die maximale Anzahl der Vektoren */
/*****************************************/ 
#include <stdlib.h>
#include <stdio.h>
#include "myString.h"
#define N 200

/**********************************/
/*      Testprogramm für 1.4      */
/**********************************/
int main (){

  printf("Dieses Programm testet die Bibliothek der 1.Uebung.\n");  //Erklärung

  int prog = 6;
  char  test[N];
  char *p;

  printf("Welches Programm möchten sie ausfuehren?\nDruecken sie die\n1 fuer strlength\n2 fuer strmirror\n3 fuer strsearch\n4 fuer strreplace\n5 fuer strsubstr\n");
  do{
    prog = 0;
    scanf("%d", &prog);
  } while( prog < 1 || prog > 5);

  getchar(); //um im dem Speicherbuffer das vorhandene \n [welches scanf zurück lässt] zu löschen
  
  printf("Geben sie einen gewünschten String ein: \n");
  fgets( test, N, stdin);

  int i;
  p = &test;
  if( prog == 1){
    i = strlength( test, N );
    }

  printf("Die länge des arrays ist: %d\n", i);
  
  /*
  strmirror();

  strsearch();

  strreplace();

  strsubstr();

  */

  return 0;
}
