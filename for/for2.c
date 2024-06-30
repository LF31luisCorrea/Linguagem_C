#include<stdio.h>
#include<stdlib.h>

int main(){

   int i;

   for(i = 3; i <= 15; i++){
        if(i == 11){
            continue;
        }
         printf("%d \n", i);
   }

   return 0;
}

