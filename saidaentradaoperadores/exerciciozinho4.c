#include<stdio.h>
#include<stdlib.h>

int main(){

    float dimi1,dimi2,result;
    printf("Digite uma das dimencoes do retangulo");
    scanf("%f",&dimi1);
    printf("Digite a outra das dimencoes do retangulo");
    scanf("%f",&dimi2);

    result = dimi1 * dimi2;
    printf("%.2f", result);

    return 0;
}

