#include<stdio.h>
#include<stdlib.h>

int main(){

   int n[10], i,j;

   for(i = 0; i < 10; i++){
    scanf("%d",&n[i]);
     }

   for(j = 0; j < 10; j++){
     if((n[j] % 2) == 1 ){
        printf(" %d ", n[j]);
     }
   }
   return 0;
}
