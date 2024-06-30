#include<stdio.h>
#include<stdlib.h>

int main(){

    float reais, litros, valor;
    printf("Digite o valor em reais do litro da gasolina");
    scanf("%f",&reais);
    printf("\n Digite o o total que voce ira colocar de gasolina");
    scanf("%f",&valor);

    litros = valor/reais;
    printf("Quantidade de litros %.2f", litros);

    return 0;
}

