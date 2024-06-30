#include<stdio.h>
#include<stdlib.h>

void soma();
void mult();
void divi();
void sub();

int main(){

   int n;
   printf("Digite 1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao.\n");
   scanf("%i",&n);
   switch(n){
      case 1:
        soma();
        break;

      case 2:
        sub();
        break;

      case 3:
        mult();
        break;

      case 4:
        divi();
        break;

      default:
        printf("Codigo errado besta\n");

   }

   return 0;
}

void soma(){

     float a, b;
     printf("Digite dois numeros:\n");
     scanf("%f%f",&a,&b);
     printf("%.2f\n", a+b);

}

void sub(){

     float a, b;
     printf("Digite dois numeros:\n");
     scanf("%f%f",&a,&b);
     printf("%.2f\n", a-b);

}

void mult(){

     float a, b;
     printf("Digite dois numeros:\n");
     scanf("%f%f",&a,&b);
     printf("%.2f\n", a*b);

}

void divi(){

     float a, b;
     printf("Digite dois numeros:\n");
     scanf("%f%f",&a,&b);
     printf("%.2f\n", a/b);

}
