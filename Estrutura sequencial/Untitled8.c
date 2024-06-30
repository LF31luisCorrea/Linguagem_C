#include<stdio.h>
#include<stdlib.h>

int main(){

   int quant, var1;
   double total;
   printf(" Aqui e o cardapio do Bom Apetite. Digite o seguinte codigo para: \n 100 para Cachorro quente \n 101 para Bauru Simples \n 102 para Bauru com ovo \n 103 para Hamburguer \n 104 para Cheeseburguer \n 105 Refrigerante \n");
   scanf("%i",&var1);


   switch(var1){
     case 100:
         printf("Digite a quantidade: ");
         scanf("%i",&quant);
         total = quant * 1.1;
         printf("O valor e: %.2lf", total);
         break;
     case 101:
         printf("Digite a quantidade: ");
         scanf("%i",&quant);
         total = quant * 1.3;
         printf("O valor e: %.2lf", total);
         break;
     case 102:
         printf("Digite a quantidade: ");
         scanf("%i",&quant);
         total = quant * 1.5;
         printf("O valor e: %.2lf", total);
        break;
     case 103:
         printf("Digite a quantidade: ");
         scanf("%i",&quant);
         total = quant * 1.1;
         printf("O valor e: %.2lf", total);
         break;
     case 104:
         printf("Digite a quantidade: ");
         scanf("%i",&quant);
         total = quant * 1.3;
         printf("O valor e: %.2lf", total);
         break;
     case 105:
         printf("Digite a quantidade: ");
         scanf("%i",&quant);
         total = quant * 1;
         printf("O valor e: %.2lf", total);
         break;
     default:
        printf("Erro");
   }

   return 0;
}


