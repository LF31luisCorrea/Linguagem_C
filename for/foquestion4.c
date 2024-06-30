#include<stdio.h>
#include<stdlib.h>

int main(){

   int i, calc = 0;

   for(i = 1; i <= 100; i++){
       calc = calc + i;
   }

   printf("%d \n", calc);

   return 0;
}

