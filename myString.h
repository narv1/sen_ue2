/* include guard */
#ifndef MYSTRING_H
#define MYSTRING_H

#include <stdio.h>


/******************************************/
/*               strlength                */
/******************************************/

int strlength( const char array1[] ){
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
    array2[i]= array1[k-1];
    i--;
    k++;
  }

   printf("Der gespiegelte String lautet:\n%s\n", array2);
   return 0;
}

/******************************************/
/*               strsearch                */
/******************************************/

int strsearch( const char str[], int maxsearch, const char sstr[] ){
  if (strlength(sstr) <= strlength(str))
    for (int i = 0; i < maxsearch; i++)
      for (int j = 0; j < strlength(sstr); j++) {
	if (str[i + j] != sstr[j])
	  break;
	if (sstr[j + 1] == 0)
	  return i;
      }

  return -1;
}

/******************************************/
/*               strreplace               */
/******************************************/ 

int strreplace(int N ,const char array1[], int i, const char array2[], int j, int k){
  char array3[N];
  int a;

  for(a = 0; a < k; a++){
    array3[a] = array1[a];
  }


  for(a = 0; a < j; a++){
    array3[i] = array2[a];
    i++;
  }
  
  printf("%s", array3);
  return -1;
}

/******************************************/
/*               strsubstr                */
/******************************************/ 

int strsubstr( char dstr[], unsigned dstrsize, const char sstr[], unsigned startpos, unsigned len ){
  if (dstrsize >= len + 1 && startpos > 0) {
    startpos--;
    unsigned i;
    for (i = 0; i < len; i++)
      if (sstr[startpos + i] != 0)
	dstr[i] = sstr[startpos + i];
      else
	break;
    i++;
    dstr[i] = 0;
    return i;
  }
  return 0;
}

#endif
