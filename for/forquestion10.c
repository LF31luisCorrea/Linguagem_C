#include<stdio.h>
#include<stdlib.h>

int main(){

   int i, calc = 0;
   float num = 0;

   for(i = 13; i <= 73; i++){
       calc = calc + i;
       num++;

   }
   printf("%.2f", calc/num);

   return 0;
}

