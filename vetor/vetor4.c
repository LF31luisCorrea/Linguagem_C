#include<stdio.h>
#include<stdlib.h>

int main(){

   int j, vet1[4], vet2[4], vet3[4], i;

   for(i = 0; i < 4; i++){
       scanf("%i%i",&vet1[i],&vet2[i]);
       vet3[i] = vet1[i] + vet2[i];
   }

   for(j = 0; j < 4; j++){
     printf("%i ", vet3[j]);
   }


   return 0;
}
