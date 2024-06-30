#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

    char op, es;
    int idade1, idade2, idade3, idade4, soma1, soma2, j, m, n, mult51, mult52, i, sub1 , sub2;
    float v1, v2, v3, v4, v5, media;

    do{
       printf("Digite a seguinte opcoes para: a para Soma, b para multiplos, c para pagamentos e 0 para sair: ");
       scanf("%c",&op);
       switch(op){
           case 'a':
               printf("Digite as idades de dois homens: ");
               scanf("%d%d",&idade1,&idade2);
               printf("Digite a idade de duas mulheres: ");
               scanf("%d%d",&idade3,&idade4);
               if(idade1 > idade2 && idade3 > idade4){
                  soma1 = idade1 + idade3;
                  soma2 = idade2 + idade4;
                  printf("O homem mais velho somado com a idade da mulher mais velha tem por resultado: %d \n", soma1);
                  printf("O homem mais nova somado com a idade da mulher mais nova tem por resultado: %d \n", soma2);
               } else
                    if(idade1 > idade2 && idade3 < idade4){
                        soma1 = idade1 + idade4;
                        soma2 = idade2 + idade3;
                        printf("O homem mais velho somado com a idade da mulher mais velha tem por resultado: %d \n", soma1);
                        printf("O homem mais nova somado com a idade da mulher mais nova tem por resultado: %d \n", soma2);
                    } else
                         if(idade1 < idade2 && idade3 > idade4){
                            soma1 = idade2 + idade3;
                            soma2 = idade1 + idade4;
                            printf("O homem mais velho somado com a idade da mulher mais velha tem por resultado: %d \n", soma1);
                            printf("O homem mais nova somado com a idade da mulher mais nova tem por resultado: %d \n", soma2);
                         } else
                             if(idade1 < idade2 && idade3 < idade4){
                                soma1 = idade2 + idade4;
                                soma2 = idade1 + idade3;
                                printf("O homem mais velho somado com a idade da mulher mais velha tem por resultado: %d \n", soma1);
                                printf("O homem mais nova somado com a idade da mulher mais nova tem por resultado: %d \n", soma2);
                             } else{
                                printf("Possuem idades iguais \n");
                             }
           break;

           case 'b':
               printf("Digite dois numeros naturais: ");
               scanf("%d%d", &m, &n);
               if(m >= 0 && n >= 0){
                  i = 0;
                  j = 0;
                  sub1 = 1;
                  sub2 = 1;
                  mult51 = 0;
                  mult52 = 0;
                  while(m >= i){
                    if(m > 0){
                       if(i > 0)
                          sub1 = i;
                       sub1 = sub1 % 5;
                       i++;
                       if(sub1 == 0){
                          mult51++;
                       }
                    }
                  }
                  while(n >= j){
                    if(n > 0){
                       if(j > 0)
                          sub2 = j;
                       sub2 = sub2 % 5;
                       j++;
                       if(sub2 == 0){
                           mult52++;
                       }
                     }
                  }
               }
               printf("A quantidade de multiplos de 5 no primeiro numero sao: %d \n", mult51);
               printf("A quantidade de multiplos de 5 no segundo numero sao: %d \n", mult52);
               break;

           case 'c':
               do{
                  printf("Digite 5 valores de pagamento: ");
                  scanf("%f%f%f%f%f", &v1, &v2, &v3, &v4, &v5);
                  if(v1 >= 0 && v2 >= 0 && v3 >= 0 && v4 >= 0 && v5 >= 0){
                     media = (v1 + v2 + v3 + v4 + v5)/5;
                     printf("A media dos valores sao: %.2f \n", media);
                  } else {
                      printf("Numero errado");
                  }
                  printf("Se voce deseja continuar digite C, se deseja sair digite E: ");
                  scanf(" %c",&es);
                  if(es != 'C'){
                    if(es != 'E')
                       printf("Opcao invalida \n");
                  }

               }while(es != 'E');

           break;

       }
    }while(op != '0');
    return 0;
}
