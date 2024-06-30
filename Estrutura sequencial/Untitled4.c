#include<stdio.h>
#include<stdlib.h>

int main(){

   char var1;
   printf("Digite alguma coisa com um caracter: ");
   scanf("%c",&var1);

   switch(var1){
     case '0':
        printf("Caractere numerico");
        break;
     case '1':
         printf("Caractere numerico");
         break;
     case '2':
        printf("Caractere numerico");
        break;
     case '3':
        printf("Caractere numerico");
        break;
     case '4':
        printf("Caractere numerico");
        break;
     case '5':
         printf("Caractere numerico");
         break;
     case '6':
        printf("Caractere numerico");
        break;
     case '7':
        printf("Caractere numerico");
        break;
     case '8':
        printf("Caractere numerico");
        break;
     case '9':
         printf("Caractere numerico");
         break;
     case 'a':
        printf("Caractere vogal");
        break;
     case 'e':
        printf("Caractere vogal");
        break;
     case 'i':
        printf("Caractere vogal");
        break;
     case 'o':
         printf("Caractere vogal");
         break;
     case 'u':
         printf("Caractere vogal");
         break;
     case 'A':
        printf("Caractere vogal");
        break;
     case 'E':
        printf("Caractere vogal");
        break;
     case 'I':
        printf("Caractere vogal");
        break;
     case 'O':
         printf("Caractere vogal");
         break;
     case 'U':
         printf("Caractere vogal");
         break;

     default:
        printf("Caractere consoante");
   }

   return 0;
}

