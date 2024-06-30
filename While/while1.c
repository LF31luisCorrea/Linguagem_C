#include<stdio.h>
#include<stdlib.h>

int main(){

  int num, cont = 1;

  while(cont){
    scanf("%i",&num);
    if(num < 0)
        break;
    printf("O numero e: %i \n", num);
  }
  return 0;
}
