#include<stdio.h>
#include<stdlib.h>

int main(){
   int i;

   for(i = 0; i <7; i++){
      int m[7]= {};
      m[i] = i;
      printf("%d", m[i]);
   }


   return 0;
}
