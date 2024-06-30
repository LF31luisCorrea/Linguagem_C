#include<stdio.h>
#include<stdlib.h>
int main(){

   int i, p = 0, n = 0, z = 0;
   float num;

   for(i = 0; i < 5; i++){
        scanf("%f",&num);
       if(num > 0)
          p++;
       else
          if(num < 0)
             n++;

   }
   printf("Numeros positivos = %d \n", p);
   printf("Numeros negativos = %d \n", n);
   return 0;
}


