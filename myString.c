/*******************************************************************************************/
/*                           Willkommen zum ersten Projekt!                                */
/*               Dieses Programm zielt darauf ab einen besseren Umgang mit:                */
/*                          Übungen mit Vektoren und Matrizen                              */
/*                                     -Arrays                                             */
/*                    -Verbesserung der Eingabe der Stringzerlegung                        */
/*                   -Berechnung einfacher mathematischer Sachverhalte                     */
/*                          -String zerlegung bzw. handling                                */
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
#include <stdio.h>
#include <stdlib.h>
#define N 200

int main (){

  int i = 0;
  char array1[N]={0};

  fgets( array1, N, stdin);

  /******************************************/
  /*               strlength                */
  /******************************************/ 
  
  for( i = 0; array1[i] != '\0'; i++);
  int k = 0, l;
  i = i -1;
  l = i;

  printf("\n%d", i);
  
  char array2[N]={0};

  /******************************************/
  /*               strmirror                */
  /******************************************/ 
  
  while( array1[k] != '\0'){
    array2[i]= array1[k];
    i--;
    k++;
    }

  printf("\n%s", array2);
  printf("\n%s", array1);

  /******************************************/
  /*               strsearch                */
  /******************************************/ 
  
  char array3[N]={0};
  
  printf("Bitte geben sie das gewuenschte Wort an das gesucht werden soll: ");
  fgets( array3, N, stdin);

  int b = 0;
  
  for( i = 0; array3[i] != '\0'; i++);
  b = i;
  b = b - 1;

  int a = 0, j;
  
  for( i = 0; i < l; i++){
    if( b == 1){
      printf("Sie haben leider nur einen einzelnen Buchstaben eingegeben.\nDas Programm endet jetzt!\n");
      break;          
    }
    if( l < b ){
      printf("Das zu suchende Wort ist groeszer als der Text selbst.\nDas ist nicht moeglich.\nDas Programm beendet sich jetzt.\n");
      break;
    }
    for( j = 0; j < b; j++){
      if( array1[i] == array3[j] ){
	  if( array1[i+b-1] == array3[j+b-1] ){
	    a++;
	    i++;
	  }
      }
      if( b == a){
	printf("\nDas Wort fängt an der Stelle %d und endet bei %d!", i-b+1, i );
	printf("\nEs ist %d Buchstaben lang\n", b);
	break;
      }
    }
  }

  /******************************************/
  /*               strreplace               */
  /******************************************/

  char array4[200];
  
  printf("Ab welcher Stelle möchte sie den String verändern: ");
  scanf("%d", &a);
  printf("Bitte geben sie das auszuwechselnde Wort an: ");

  scanf("%199s", &array4[0]);
  //  fgets( array4, 200, stdin);
  
  for( i = 0; array4[i] != '\0'; i++);

  //a = a - 1;
  
  i = i - 1;

  //b = a + i;
  
  for( b = a + i; a - 1 < b; b--){
    
    array1[b-1] = array4[i];
    i--;
    }
  
  printf("\n%s\n%s\n", array4, array1);

  
  
  return 0;
}











               
