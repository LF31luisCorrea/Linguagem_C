#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


  float num, quad, media = 0;

  do{
    scanf("%f",num);
    quad = num * num;
    printf("O quadrado do numero e: %f \n", quad);
    media = num % 6;
  } while(media == 0);

  return 0;
}

