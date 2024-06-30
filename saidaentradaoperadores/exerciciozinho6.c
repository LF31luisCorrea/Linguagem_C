#include<stdio.h>
#include<stdlib.h>

int main(){

    float pao = 0.55, broa = 1.5, vendp, vendb, result1, result2, valorr,valorg;
    printf("Digite a venda de pao do dia");
    scanf("%f",&vendp);
    printf("Digite a venda de broa do dia");
    scanf("%f",&vendb);


    result1 = vendp * pao;
    printf(" Valor arrecadado do pao %.2f", result1);
    result2 = vendb * broa;
    printf("\n Valor arrecadado da broa %.2f", result2);
    valorr = result1 + result2;
    printf("\n Valor arrecadado total %.2f", valorr);
    valorg = valorr * 0.1;
    printf("\n Valor a guardar %.2f", valorg);

    return 0;
}

