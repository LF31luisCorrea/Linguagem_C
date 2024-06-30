#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

   int i;
   float num, calc;

   for(i = 0; i < 4; i++){
        scanf("%f",&num);
        calc = num * num * num;
        printf("%.2f \n", calc);
        printf("%.2f \n", cbrt(num));
   }

   return 0;
}

