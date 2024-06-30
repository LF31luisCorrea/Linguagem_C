#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[10], nome2[11], nome3[12];
    int idade1, idade2, idade3;
    float salario1, salario2, salario3;

    printf("Digite o primeiro nome");
    scanf("%s",&nome);

     printf("Digite a primeira idade");
    scanf("%i",&idade1);

     printf(" Digite o primeiro salario");
    scanf("%f",&salario1);

    printf(" Digite o segundo nome");
    scanf("%s",&nome2);

    printf(" Digite a segunda idade");
    scanf("%i",&idade2);

    printf("Digite o segundo salario");
    scanf("%f",&salario2);

    printf("Digite o terceiro nome");
    scanf("%s",&nome3);

    printf("Digite a terceira idade");
    scanf("%i",&idade3);

    printf("Digite o terceiro salario");
    scanf("%f",&salario3);

    printf("\n %s %i %f", nome, idade1, salario1);
    printf("\n %s %i %f", nome2, idade2, salario2);
    printf("\n %s %i %f", nome3, idade3, salario3);

    return 0;

}
