
/******************************************/
/*               strlength                */
/******************************************/

char strlength(char array1[], int N){
  int i;
  for( i = 0; array1[i] != '\0'; i++);
  return i-1;
}

/******************************************/
/*               strmirror                */
/******************************************/
/*
char strmirror(){
  
  char array2[N]={0};
  
  while( array1[k] != '\0'){
    array2[i]= array1[k];
    i--;
    k++;
    }

  printf("\n%s", array2);
  printf("\n%s", array1);
  printf("\n\n");
}
*/
/******************************************/
/*               strsearch                */
/******************************************/
/*
char strsearch(){

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
  
}
*/
/******************************************/
/*               strreplace               */
/******************************************/ 
/*
char strreplace(){

  for( i = 0; array4[i] != '\0'; i++);

  //a = a - 1;

  i = i - 1;

  //b = a + i;

  for( b = a + i; a - 1 < b; b--){

    array1[b-1] = array4[i];
    i--;
  }                             
  
}
*/
