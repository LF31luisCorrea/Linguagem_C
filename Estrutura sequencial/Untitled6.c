#include<stdio.h>
#include<stdlib.h>

int main(){

   char var1;
   double preco, total;
   printf("Digite a categoria do produto com A, B, C e D para outras: ");
   scanf("%c",&var1);
   printf("Digite o preco para saber o reajuste: ");
   scanf("%lf",&preco);

   switch(var1){
     case 'A':
         total = preco * 1.5;
         printf("O total e: %.2lf", total);
         break;
     case 'B':
        total = preco * 1.25;
        printf("O total e: %.2lf", total);
        break;
     case 'C':
        total = preco * 1.15;
        printf("O total e: %.2lf", total);
        break;
      case 'D':
        total = preco * 1.05;
        printf("O total e: %.2lf", total);
        break;
     default:
        printf("Erro");
   }

   return 0;
}

