/**6.	Fazer um programa que pergunta um n�mero ao usu�rio,
e mostra sua tabuada completa (de 1 at� 10).
O n�mero digitado n�o pode ser zero. Caso seja,
mensagem de erro e retorna para nova digita��o.**/

#include<stdio.h>
#include<stdlib.h>
main(){
       
      int num=0,i=0,muti=0;
      
printf("Digite um numero:  ");       
scanf("%d",&num);


while (i<10){
i++;
muti = num*i;
printf("\t%d x %d = %d\n",num,i,muti);      
      }
       
system("pause");}
