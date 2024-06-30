#include<stdio.h>
#include<stdlib.h>

int main(){

    float kilo=12, quant, result1, result2;
    printf("Digite um a quantidade em quilograma");
    scanf("%f",&quant);

    result1 = quant * kilo;
    result2 = result1 - kilo;
    printf("\n Total a ser pago %.2f", result2);

    return 0;
}

