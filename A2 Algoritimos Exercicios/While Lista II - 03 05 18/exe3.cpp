/**3.Fazer um programa que recebe um n�mero inteiro qualquer e mostre
os n�meros pares e �mpares (separados, em duas colunas), de 1 at� esse n�mero inteiro.
O n�mero digitado n�o pode ser zero e nem negativo. Caso seja, mensagem de erro e retorna para nova digita��o.**/

#include<stdio.h>
#include<stdlib.h>


main(){
int i=0, num=0;

ininum:
puts("Digite um numero qualquer:  ");
scanf("%d",&num);       

if(num<=0){
puts("Numero nao pode ser menor ou igual a zero");
goto ininum;           
           }



while(i<=num){
i++;                     
if(num%2==0)
printf("%d\t",i);

if(num%2!=0)
printf("\t%d\n\n\n\n\n",i);                      
}


system("pause");}
