/*5) Fa�a um programa para que o usu�rio digite tr�s palavras,
concatene as tr�s e exiba a informa��o concatenada.*/

#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){setlocale(LC_ALL, "Portuguese");
char pala1[30],pala2[30],pala3[30];

    printf("Digite uma  palavra:  ");
    gets(pala1);
    printf("Digite uma  palavra:  ");
    gets(pala2);
    printf("Digite uma  palavra:  ");
    gets(pala3);

strcat(pala1,pala2);
strcat(pala1,pala3);
printf("%s",pala1);

system("pause");}
