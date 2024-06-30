#include<stdio.h>
#include<stdlib.h>

int main(){

   char var1;
   printf("Digite A, B, C ou D: ");
   scanf("%c",&var1);

   switch(var1){
     case 'A':
         printf("Excelente");
         break;
     case 'B':
        printf("Bom");
        break;
     case 'C':
        printf("Regular");
        break;
     case 'D':
        printf("Ruim");
        break;
     default:
        printf("Erro");
   }

   return 0;
}
