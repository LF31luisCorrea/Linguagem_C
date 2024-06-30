#include<stdio.h>
#include<stdlib.h>

int main(){
  printf("Seja bem-vindo usuario");

  float pre, total;
  int quant;

  printf("Valor do produto");
  scanf("%f",&pre);

  printf("Quantidade do produto");
  scanf("%i",&quant);

  total = pre * quant;
  printf("%.2f", total);

  return 0;
}
