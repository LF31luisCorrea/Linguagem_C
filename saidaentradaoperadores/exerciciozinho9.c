#include<stdio.h>
#include<stdlib.h>

int main(){

    int a = 10, b = 20, t;
    t = a;
    a = b;
    printf("Valor de a %i", a);
    b = a - t;
    printf("\n Valor de b %i", b);

    return 0;
}
