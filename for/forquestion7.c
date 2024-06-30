#include<stdio.h>
#include<stdlib.h>

int main(){

   int i;

   for(i = 600; i >= 1; i--){
        if(i % 2 == 0)
           printf("%d \n", i);
        else
            continue;
   }



   return 0;
}

