#include<stdio.h>
#include<stdlib.h>

int main(){

   int i;
   float nota[10], media = 0

   for(i = 0; i < 10; i++){
      scanf("%f",&nota[i]);
      media = media + nota[i];
   }

   media = media/10;
   printf("%.2f ", media);


   return 0;

}
