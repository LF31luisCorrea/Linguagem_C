#include<stdio.h>
#include<stdlib.h>

int main(){

    int a = 10, b = 20;

    b = a;
    printf("Valor de b %i", b);
    a = b + b;
    printf("\n Valor de a %i", a);

    return 0;
}

