#include<stdio.h>
#include<stdlib.h>

int main(){

   char var1, sexo;

   printf("Digite S para Solteiro, C para casado, V para viuvo ou D para divorciado: ");
   scanf("%c",&var1);


   switch(var1){
     case 'S':
            printf("Digite M para masculino e F para Feminino");
   scanf(" %c",&sexo);
         if(sexo == "M")
           printf("Sexo Masculino. Estado civil: Solteiro");
         else
           printf("Sexo Feminino. Estado civil: Solteira");
         break;
     case 'V':
        printf("Digite M para masculino e F para Feminino");
        scanf(" %c",&sexo);
        if(sexo == "M")
           printf("Sexo Masculino. Estado civil: Viuvo");
        else
           printf("Sexo Feminino. Estado civil: Viuva");;
        break;
     case 'C':
        printf("Digite M para masculino e F para Feminino");
        scanf(" %c",&sexo);
        if(sexo == "M")
           printf("Sexo Masculino. Estado civil: Casado");
        else
           printf("Sexo Feminino. Estado civil: Casada");
        break;
     case 'D':
        printf("Digite M para masculino e F para Feminino");
        scanf(" %c",&sexo);
        if(sexo == "M")
           printf("Sexo Masculino. Estado civil: Divorciado");
         else
           printf("Sexo Feminino. Estado civil: Divorciada");
        break;
     default:
        printf("Erro");
   }
}

