/*1) Fazer um programa para criar uma fun��o que retorne um valor para identificar que tipo de n�mero inteiro o usu�rio digitou.
Ser� necess�rio exibir na tela a mensagem:
N�mero Par, caso o usu�rio tenha digitado um n�mero par na fun��o principal;
N�mero �mpar, caso o usu�rio tenha digitado um n�mero �mpar na fun��o principal;
N�mero Negativo, caso o usu�rio tenha digitado um n�mero negativo na fun��o principal.
Caso seja digitado um valor zero, este deve ser criticado e o programa dever� retornar para nova digita��o.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int verificanumero(int n1){
if (n1 == 0){
printf("O numero %d n�o pode ser igual a zero\n",n1);}
else if (n1 <0){
printf("o numero %d � negativo\n",n1);}
else if (n1%2==0){
printf("o numero %d � par\n",n1);}
else
printf("o numero %d � impar\n",n1);



}                   
int main(){setlocale (LC_ALL, "Portuguese");
int n1=0;

printf("Digite um numero Inteiro:  ");
      scanf("%d",&n1);
        
n1 = verificanumero(n1);

printf("a\n");










system("pause");}


