
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

  char prog = '0';
  char  test[N];

  printf("Welches Programm möchten sie ausfuehren?\nDruecken sie die\n1 fuer strlength\n2 fuer strmirror\n3 fuer strsearch\n4 fuer strreplace\n5 fuer strsubstr\n");
  // Schleife zum abfangen eines Fehlers
  while( prog = '0' ){
    prog = getchar();
    getchar();
    if( prog <= '5' && prog >= '1' ){
      break;
    }
    printf("\nSie haben nichts zwischen 0-6 eingegeben!\n");
  }

  /****************************/
  /*  Bestätigung der Eingabe */
  /****************************/
  if( prog >= 1 || prog <= 2){
    printf("Sie haben sich für die Nr. %c entschieden\n" , prog);
  }
  
  // Befüllung des Arrays  
  printf("Geben sie einen gewünschten String ein: \n");
  fgets(test, N, stdin);

  /*****************************/
  /*         strlength         */
  /*****************************/
  int i;

  if( prog == 49 ){
    // Ausgabe des Rückgabewertes
    i = strlength(test, N);
    printf("Die länge des arrays ist: %d\n", i-1);
  }
  
  /*************************/
  /*       strmirror       */
  /*************************/  
  if ( prog == 50 ){
    //    strlength( test, N );
    i =strmirror(test, N);
  }

  /*************************/
  /*       strsearch       */
  /*************************/
  if( prog == 51 ){
    i = strsearch(test, N);
  }

  /*************************/
  /*       strreplace      */
  /*************************/
  
  if( prog == 52 ){
    i =  strreplace(test, N);
  }

  /*
  strsubstr();

  */

  return 0;
}
