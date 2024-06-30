#include<stdio.h>
#include<stdlib.h>

int main(){

   int var1;
   printf(" Ola seja bem vindo, temos 3 promocoes de hoje.\n Temos o Big Sanduba: 2 hamburgueres, queijo, batata fritas e refrigerante.\n Quase Sanduba: 1 hambúrguer, batata fritas e refrigerante. Mirradus Sanduba: 1 misto quente e refrigerante. \n Digite 1, 2 ou 3 para as opcoes acima. Escolha com sabedoria: ");
   scanf("%d",&var1);

   switch(var1){
     case 1:
         printf("Voce escolheu Big Sanduba, o total e R$5,00 ");
         break;
     case 2:
        printf("Voce escolheu Quase Sanduba, o total e R$3,00");
        break;
     case 3:
        printf("Voce escolheu o Mirradus Sanduba, o total e R$1,50");
        break;
     default:
        printf("Erro");
   }

   return 0;
}
