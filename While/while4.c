#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  char dent[10];
  int cont = 0;

  do{
    scanf("%s",&dent);
    if(strcmp(dent, "DENTISTA")==0 || strcmp(dent, "Dentista") == 0 || strcmp(dent, "dentista") == 0)
       cont++;
  }while(strcmp(dent, "DENTISTA")==0 || strcmp(dent, "Dentista") == 0 || strcmp(dent, "dentista") == 0);

  printf("A quantidade e: %i", cont);

  return 0;
}



