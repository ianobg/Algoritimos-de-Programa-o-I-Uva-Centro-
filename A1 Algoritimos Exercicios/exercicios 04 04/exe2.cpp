/*2) Uma empresa abriu uma linha de cr�dito para os funcion�rios. O valor
da presta��o n�o pode ultrapassar 30% do sal�rio. Fa�a um programa
que receba o sal�rio, o valor do empr�stimo e o n�mero de presta��es e
informe se o empr�stimo pode ser concedido. Nenhum dos valores
informados pode ser zero ou negativo. Caso aconte�a, mensagem de erro
e retornar para nova digita��o daquela informa��o.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main(){setlocale(LC_ALL,"Portuguese");
int salario=0,empres=0,npres=0,rest=0,limite=0;

inisalario:
printf("salario aqui\n");
scanf("%d",&salario);
if(salario<=0){
printf("nao pode menor zero\n");
goto inisalario;}
else

iniempres:
printf("emprestimo aqui\n");
scanf("%d",&empres);
if(empres<=0){
printf("nao pode menor zero\n");
goto iniempres;}
else

ininpres:
printf("numero de presta��es aqui\n");
scanf("%d",&npres);
if(npres<=0){
printf("nao pode menor zero\n");
goto ininpres;}
else

rest = empres / npres;

if(rest>0.3*salario)
printf("n�o foi aprovado");
else
printf("foi aprovado");



return 0;}
