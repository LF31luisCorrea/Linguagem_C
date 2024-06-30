#include<stdio.h>
#include<stdlib.h>

void soma(float,float);
void mult(float,float);
void divi(float,float);
void sub(float,float);

int main(){
   float A, B;
   int n;
   printf("Digite 1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao.\n");
   scanf("%i",&n);

   switch(n){
      case 1:
        printf("Digite dois numeros:\n");
        scanf("%f%f",&A,&B);
        soma(A,B);
        break;

      case 2:
        printf("Digite dois numeros:\n");
        scanf("%f%f",&A,&B);
        sub(A,B);
        break;

      case 3:
        printf("Digite dois numeros:\n");
        scanf("%f%f",&A,&B);
        mult(A,B);
        break;

      case 4:
        printf("Digite dois numeros:\n");
        scanf("%f%f",&A,&B);
        divi(A,B);
        break;

      default:
        printf("Codigo errado besta\n");

   }

   return 0;
}

void soma(float a, float b){
     printf("%.2f\n", a+b);

}

void sub(float a, float b){
     printf("%.2f\n", a-b);

}

void mult(float a, float b){
     printf("%.2f\n", a*b);

}

void divi(float a, float b){
     printf("%.2f\n", a/b);

}

