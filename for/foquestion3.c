#include<stdio.h>
#include<stdlib.h>

int main(){

   int i;

   for(i = 1; i <= 500; i++){
        if(i % 5 == 0)
           printf("%d \n", i);
        else
            continue;
   }

   return 0;
}
