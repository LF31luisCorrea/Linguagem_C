#include<stdio.h>
#include<stdlib.h>


int main (){

    float num, num1, total;
    printf("Digite um numero");
    scanf("%f",&num);
    printf("Digite outro numero");
    scanf("%f",&num1);
    if(num1 != 0)
        total = num1 * num;
    printf("O total e %f", total);
    return 0;
}

