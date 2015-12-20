/*********************/
/*   include guard   */
/*********************/
#ifndef MYSTRING_H
#define MYSTRING_H

#include <stdio.h>

/******************************************/
/*               strlength                */
/******************************************/
int strlength(const char array1[], int n){
  int i, k;

  // Überprüfung mit dem '\0'. falls die Arraygröße überschritten wurde
  for(i = 0; i < n; i++){
    if(array1[i] != '\0'){
      k++;
      if(k >= n-2){
	return -1;
      }
    }
  }
  
  // Zähler der Stringlänge
  for(i = 0; array1[i] != '\0'; i++);
  return i;
}

/******************************************/
/*               strmirror                */
/******************************************/
int strmirror(char array1[], int n){
  char array2[n];
  int k = 0, i = 0;

  // umschichten der arrays
  for(i = 0; array1[i] != '\0'; i++);
   while(array1[k++] != '\0'){
    array2[i]= array1[k-2];
    i--;
  }

   printf("Der gespiegelte String lautet:\n%s\n", array2);
   return 0;
}

/******************************************/
/*               strsearch                */
/******************************************/
int strsearch(const char str[], int n, const char sstr[]){

  //suchen auf Gleichheit eines Wortes in einem String
  if(strlength(sstr, n) -1 <= strlength(str, n))
    for(int i = 0; i < n; i++)
      for(int j = 0; j < strlength(sstr, n); j++) {
	if(str[i + j] != sstr[j])
	  break;
	if(sstr[j + 1] == 0 || sstr[j + 1] == 10)
	  return i;
      }

  return -1;
}

/******************************************/
/*               strreplace               */
/******************************************/ 
int strreplace(char dstr[], int n ,const char sstr[], const char str[],const char nstr[]){
  int a;
  int i, j, k = 0, m;

  // benötigte varibalen für  strreplace
  i = strsearch(sstr, n, str);
  j = strlength(nstr, n);
  j--;
  k = strlength(sstr, n);
  m = strlength(str, n);
  m--;
  k = k - m + j;

  // befüllen bis zum gesuchten Wort
  for(a = 0; a <  i; a++){
    if(i <= 0 || i > k){
      return 0;
    }
    dstr[a] = sstr[a];
  }

  // befüllen des neuen Wortes
  for(a = 0; a < j; a++){
    dstr[i + a] = nstr[a];
  }

  // befüllen des Restes
  for(; i < k; i++){
    if(k + j >= n){
      return 0;
    }
    dstr[i + a] = sstr[i + m];
  }
  printf("\n%s\n", dstr);

  i = strlength(dstr, n);
  
  return i;
}

/******************************************/
/*               strsubstr                */
/******************************************/ 
int strsubstr( char dstr[], unsigned dstrsize, const char sstr[], unsigned startpos, unsigned len ){
  if (dstrsize >= len + 1 && startpos > 0) {
    startpos--;
    unsigned i;
    for (i = 0; i < len; i++)
      /* if (sstr[startpos + i] != 0 || sstr[startpos + i] != 10) */
      if (sstr[startpos + i] != 0 || sstr[startpos + i] != 10)
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
