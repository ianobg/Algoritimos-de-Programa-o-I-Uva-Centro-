/*2) Fa�a um programa para criar uma fun��o que recebe dois n�meros inteiros e
retorna a soma dos n�meros entre eles.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int somanumero(int n1,int n2,int soma){
soma = n1 + n2;
printf("a soma dos valores inteiros e:  %d\n\n",soma);
}
////////////////////////////////////////////
int main(){
int n1=0,n2=0,soma=0;       
printf("Entre com um valor Inteiro:   ");
scanf("%d",&n1);

printf("Entre com outro valor inteiro:   ");
scanf("%d",&n2);

soma = somanumero(n1,n2,soma);


       
       
       
       
system("pause");}
