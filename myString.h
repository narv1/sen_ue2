
/******************************************/
/*               strlength                */
/******************************************/

int strlength( char array1[], int N ){
  int i;
  for( i = 0; array1[i] != '\0'; i++);
  return i;
}

/******************************************/
/*               strmirror                */
/******************************************/

int strmirror( char array1[], int N ){
  char array2[N];
  int k = 0, i = 0;
  for( i = 0; array1[i] != '\0'; i++);
   while( array1[k] != '\0'){
    array2[i]= array1[k];
    i--;
    k++;
  }

   printf("Der gespiegelte String lautet:\n%s\n", array2);
   return 0;
}

/******************************************/
/*               strsearch                */
/******************************************/

int strsearch( char array1[], int N ){

  int i, b, l;
  char array2[N];
  printf("\nBitte geben sie den gewünschten zusuchenden Begriff ein: ");
  fgets( array2, N, stdin );

  for( i = 0; array1[i] != '\0'; i++);
  for( b = 0; array2[b] != '\0'; b++);
  b --; 
  l = i;
  l --;

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
      if( array1[i] == array2[j] ){
	if( array1[i+b-1] == array2[j+b-1] ){
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
  return 0;
}

/******************************************/
/*               strreplace               */
/******************************************/ 

int strreplace( char array1[], int N ){

  int i, a, b;
  char array2[N];

  
  printf("Ab welcheer Stelle möchten sie den string ersetzen: ");
  scanf("%d", &a);

  getchar();

  printf("Schreiben sie was sie ersetzen wollen: ");
  fgets(array2, N, stdin);

  for( i = 0; array2[i] != '\0'; i++ );
  
  a = a - 1;

  i = i - 2;

  b = a + i;

  for( b = a + i; a - 1 < b; b--){

    array1[b] = array2[i];
    i--;
  }
  printf("%s", array1);
  return 0;
}

