#include<stdio.h>
#include<stdlib.h>
int main(){

   int i, valor, maior;

   for(i = 0; i < 5; i++){
       scanf("%i",&valor);
       if(i==0)
          maior=valor;
        else
            if(valor>maior)
                maior=valor;
                 else
                    if(valor>maior)
                       maior=valor;
                        else
                          if(valor>maior)
                             maior=valor;
                              else
                                 if(valor>maior)
                                     maior=valor;
   }

   printf("\n maior %d", maior);

   return 0;
}

