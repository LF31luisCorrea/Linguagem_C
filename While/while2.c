#include<stdio.h>
#include<stdlib.h>

int main(){

  float num, media, total, cont = 0;

  while(num >0){
    scanf("%f",&num);
    if(num < 0)
        break;
    media = media + num;
    cont++;
  }
  total = media/cont;
  printf("A media e: %.2f", total);

  return 0;
}

