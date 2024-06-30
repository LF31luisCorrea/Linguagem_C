#include<stdio.h>
#include<stdlib.h>

int main (){
    char nome[20];
    int idade;
    printf("Digite o nome do atleta");
    scanf("%s",&nome);
    printf("Digite a idade do atleta para saber o nivel dele ");
    scanf("%i",&idade);
    if(idade > 4 && idade < 26){
        if(idade >= 5 && idade <= 10)
           printf("O nome e %s e sua idade e %i e pertence a categoria Infantil ", nome, idade);
        else
            if(idade >= 11 && idade <= 15)
               printf("O nome e %s e sua idade e %i e pertence a categoria Juvenil ", nome, idade);
            else
                if(idade >= 16 && idade <= 20)
                   printf("O nome e %s e sua idade e %i e pertence a categoria Junior ", nome, idade);
                else
                    if(idade >= 21 && idade <= 25)
                       printf("O nome e %s e sua idade e %i e pertence a categoria Profissional ", nome, idade);
    }
    return 0;
}
