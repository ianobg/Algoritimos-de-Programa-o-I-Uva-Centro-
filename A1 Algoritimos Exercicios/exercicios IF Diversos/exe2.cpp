/*2) Fa�a um programa para que o usu�rio digite uma palavra e exiba
quantos caracteres tem a palavra, depois concatene essa palavra
com a palavra �lindo� e exiba o conte�do final da concatena��o.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
int tam;
char nome[30];

printf("Entre com um nome:  ");
gets (nome);
tam= strlen(nome);
printf("O nome digitado tem exatos %d Caracteres\n\n",tam);
strcat(nome," lindo\n\n");
printf("%s",nome);


system("pause");
}

