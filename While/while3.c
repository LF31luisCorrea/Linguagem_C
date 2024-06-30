#include<stdio.h>
#include<stdlib.h>

int main(){

  float num, cont = 0;

  while(num != 0){
    scanf("%f",&num);
    if(num >= 100 && num <=200)
       cont++;
  }

  printf("Os numeros digitados entre 100 e 200 sao: %.0f", cont);

  return 0;
}


