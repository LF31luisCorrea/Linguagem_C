#include<stdio.h>
#include<stdlib.h>

int main(){

   int i;
   float num, calc;

   for(i = 0; i <= 4; i++){
        scanf("%f",&num);
        calc = num * num;
        printf("%.2f \n", calc);
   }

   return 0;
}


