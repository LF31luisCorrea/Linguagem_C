#include<stdio.h>
#include<stdlib.h>

int main(){

    int cava,result, ferra = 4;
    printf("Digite o numero de cavalos que tem no seu haras para saber a quantidade de ferraduras para equipar todos");
    scanf("%i",&cava);

    result = cava * ferra;

    printf("%i", result);

    return 0;
}
