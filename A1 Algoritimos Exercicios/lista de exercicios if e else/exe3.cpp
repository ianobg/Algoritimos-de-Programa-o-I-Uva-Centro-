/*Escreva um programa em C que recebe um inteiro e diga se � par
ou �mpar.
Use o operador matem�tico % (resto da divis�o ou m�dulo) e o
teste condicional if.*/


#include<stdio.h>
#include<stdlib.h>
main(){
       
int num;
printf("Digite um numero:  ");
scanf("%d",&num);
if ((num %2) == 0)
printf("O Numero e par\n\n\n\n\n");

else printf("o numero e impar\n\n\n\n");

system("pause");


}

