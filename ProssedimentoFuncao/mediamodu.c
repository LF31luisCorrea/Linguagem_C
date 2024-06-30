#include<stdio.h>

float media(float, float);
void situacao(float);

float media(float a, float b){
    return (a + b)/2;

}

void situacao(float result){
    if(result >= 6){
       printf("Aluno aprovado.\n");
    } else{
       printf("Aluno reprovado.\n");
    }
}


int main(){

    float num1, num2, result;

    do{
       printf("Digite uma nota para ser calculada a media:\n");
       scanf("%f",&num1);
    }while(num1 < 0 || num1 > 10);

    do{
       printf("Digite outra nota para ser calculada a media:\n");
       scanf("%f",&num2);
    }while(num2 < 0 || num2 > 10);
    result = media(num1, num2);

    printf("A media e: %.2f\n", result);
    situacao(result);
    return 0;

}
