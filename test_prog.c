/*******************************************************************************************/
/*                           Willkommen zum ersten Projekt!                                */
/*               Dieses Programm zielt darauf ab einen besseren Umgang mit:                */
/*                                     -Arrays                                             */
/*                   -Verbesserung der Eingabe einer Stringzerlegung                       */
/*                  -Berechnung einfacher mathematischer Sachverhalte                      */
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
#include <stdbool.h>
#include <stdio.h>
#include "myString.h"
#define N 200

/**********************************/
/*      Testprogramm für 1.4      */
/**********************************/
int main (){

  printf("Dieses Programm testet die Bibliothek der 1.Uebung 'myString.h'.\n");  //Erklärung

  char prog = '0';
  char  test[N], test2[N];

  printf("Welches Programm möchten sie ausfuehren?\nDruecken sie die\n1 fuer strlength\n2 fuer strmirror\n3 fuer strsearch\n4 fuer strreplace\n5 fuer strsubstr\n");
  
  /********************************************/
  /* Schleife zum abfangen des Eingabefehlers */
  /********************************************/
  while( true){
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
  if( prog >= '1' && prog <= '5'){
    printf("Sie haben sich für die Nr. %c entschieden\n" , prog);
  }
  

  /*************************/
  /*  Befüllen des Arrays  */
  /*************************/  
  printf("Geben sie einen gewünschten String ein: \n");
  fgets(test, N, stdin);
  
  /*****************************/
  /*         strlength         */
  /*****************************/
  int i;

  if(prog == 49){
    // Ausgabe des Rückgabewertes
    i = strlength(test, N);
    if( i == -1){
      printf("Es ist ein Fehler aufgetreten!\n");
    }else{
    printf("Die länge des arrays ist: %d\n", i-1);
    }
  }
  
  /*************************/
  /*       strmirror       */
  /*************************/  
  if (prog == 50){
    //    strlength( test, N );
    i =strmirror(test, N);
  }

  /*************************/
  /*       strsearch       */
  /*************************/
  if(prog == 51){
    printf("Nach was soll gesucht werden:\n");
    fgets(test2, N, stdin);
    i = strsearch(test, N, test2);

    if(i == -1){
      printf("Es ist ein Fehler aufgetreten.\n");
    }else{
    printf("Das Wort befindet sich an der %d stelle\n", i+1);
    }
  }

  /*************************/
  /*       strreplace      */
  /*************************/
  int j;
  char nstr[N], dstr[N];
  
  if(prog == 52){
    printf("Was soll ersetzt werden:\n");
    fgets(test2, N, stdin);
    printf("Was soll eingesetzt werden:\n");
    fgets(nstr, N, stdin);
    j =  strreplace(dstr, N,  test, test2, nstr);
  }

  /************************/
  /*       strsubstr      */
  /************************/
  if(prog == 53){
    printf("Was soll kopiert werden:\n");
    fgets(test2, N, stdin);
    i = strsearch(test, N, test2);
    j = strlength(test2, N);
       strsubstr(dstr, N, test, i, j);
    }
  

  return 0;
}
