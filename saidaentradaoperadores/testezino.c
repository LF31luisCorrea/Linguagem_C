#include<stdio.h>
#include<stdlib.h>


int main (){

    int num, num1;
    printf("Digite um numero inteiro");
    scanf("%i",&num);
    num1 = num;
    if(num < 0)
        num1 = num1 * (-1);
    printf("O numero e %i, \nO modulo e %i", num, num1);
    return 0;
}
