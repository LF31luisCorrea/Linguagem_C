#include<stdio.h>
#include<stdlib.h>

int main (){
    int num1, num2, num3;
    printf("Digite um numero inteiro");
    scanf("%i",&num1);
    printf("Digite outro numero inteiro");
    scanf("%i",&num2);
    printf("Digite outro numero inteiro");
    scanf("%i",&num3);
    if((num1 > num2) && (num1 > num3)){
        if(num2 > num3)
           printf("A ordem crescente e %i, %i, %i", num3, num2, num1);
        else
           printf("A ordem crescente e %i, %i, %i", num2, num3, num1);
    }
    else
        if((num2 > num1) && (num2 > num3)){
            if(num1 > num3)
                printf("A ordem crescente e %i, %i, %i", num3, num1, num2);
            else
                printf("A ordem crescente e %i, %i, %i", num1, num3, num2);
        }
        else
            if((num3 > num2) && (num3 > num1)){
                if(num2 > num1)
                    printf("A ordem crescente e %i, %i, %i", num1, num2, num3);
                else
                    printf("A ordem crescente e %i, %i, %i", num2, num1, num3);
            }

    return 0;
}

