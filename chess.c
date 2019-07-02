#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "chess.h"

char invColor(char c){
  switch( c ){
    case '_': return '=';
    case '=': return '_';
    case '.': return '@';
    case '@': return '.';
    case ' ': return ' ';
  }

  return '#';
}

int tamFila(char** a){
  int i=0;
  while(a[i]){
    i++;
  }
  return i;
}

int tamCol(char** a){
  int i=0;
  while(a[0][i]){
    i++;
  }
  return i;
}

char** join(char**a,char**b){

  int filas = tamFila(a);
  int columnas = tamCol(a) + tamCol(b);
  int i,j;

  char** unir = (char**)malloc(sizeof(char*)*(filas));
  unir[filas]=0;
  for(i=0;i<filas;i++){
    unir[i]=(char*)malloc(sizeof(filas)*(columnas));
  }
    for(j=0;j<filas;j++){
      strcpy(unir[j],a[j]);
      strcat(unir[j],b[j]);
    }	
  
  return unir;
}