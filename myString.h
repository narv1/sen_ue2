
char strlength(){
  for( i = 0; array1[i] != '\0'; i++);
  return i-1;  
}

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
