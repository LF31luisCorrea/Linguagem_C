#include<stdio.h>
#include<stdlib.h>

int main(){

   int n[10], inv[10], i, j;

   for(i = 0; i < 10; i++){
       scanf("%i",&n[i]);
   }

   for(j = 9;  j >= 0; j--){
      inv[j] = n[j];
      printf("%i ", inv[j]);
   }

   return 0;
}
