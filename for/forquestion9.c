#include<stdio.h>
#include<stdlib.h>

int main(){

   int i;

   for(i = 0; i < 200; i++){
        if(i % 4 == 0)
            printf("%d \n", i);
        else
            continue;
   }

   return 0;
}

