/*1) Fazer um programa para que o usu�rio informe tr�s palavras.
As palavras n�o podem ser repetidas. Caso aconte�a,
mensagem de erro e retorna para nova digita��o daquela informa��o.
Ao final o programa dever� concatenar as tr�s palavras e exibir para
o usu�rio.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main(){setlocale(LC_ALL,"Portuguese");
      char str1[10],str2[10],str3[10];
      int resp;
      
primeirastr:
printf("Informe a Primeira Palavra\n");
scanf("%s",str1);

segundastr:
printf("Informe a segunda Palavra\n");
scanf("%s",str2);

if(strcmp(str1,str2)== 0){
printf("\t\t|---ATEN��O---|\nAs Palavras n�o podem ser iguais.\n");                       
printf("Quer Digitar novamente qual palavra ?\nDigite '1' para a primeira ou '2' para a segunda\n");
scanf("%d",&resp);
if(resp==1){goto primeirastr;}
else if (resp==2){goto segundastr;}}
else

terceirastr:
printf("Informe a terceira Palavra\n");
scanf("%s",str3);

if(strcmp(str1,str3)== 0 || strcmp(str2,str3)== 0){
printf("\t\t|---ATEN��O---|\nAs Palavras n�o podem ser iguais.\n");                       
printf("Quer Digitar novamente qual palavra ?\nDigite '1' para a primeira, '2' para a segunda ou '3' para terceira\n");
scanf("%d",&resp);
if(resp==1){goto primeirastr;}
if (resp==2){goto segundastr;}
else if (resp==3){goto terceirastr;}}
else
strcat(str1,str2);
strcat(str1,str3);
printf("a soma das palavras s�o %s\n\n\n",str1);






system("pause");}
