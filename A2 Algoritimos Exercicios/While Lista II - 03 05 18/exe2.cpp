/**2.	Fazer um programa que mostre todos os n�meros pares de 1 at� 100 em prdem decrescente.**/


#include<stdio.h>
#include<stdlib.h>
main(){
int i=100;


while (i>1){
i--;
if(i%2==0){
printf("%d\n",i);}
}
system("pause");}

