#include<stdio.h>
#include<stdlib.h>

int main(){

   char var1;
   double num1, num2, totalis;
   printf("Digite a operacao a ser realizada com /, +, - ou *: ");
   scanf("%c",&var1);
   printf("Digite um numero ");
   scanf("%lf",&num1);
   printf("Digite outro numero ");
   scanf("%lf",&num2);

   switch(var1){
     case '+':
         totalis = num1 + num2;
         printf("O resultado e: %.2lf", totalis);
         break;
     case '-':
         totalis = num1 - num2;
         printf("O resultado e: %.2lf", totalis);
        break;
     case '/':
         totalis = num1/num2;
         printf("O resultado e: %.2lf", totalis);;
        break;
     case '*':
         totalis = num1 * num2;
         printf("O resultado e: %.2lf", totalis);
        break;
     default:
        printf("Erro");
   }

   return 0;
}

