/**
7.	Fazer um programa para que o usu�rio digite uma palavra de at� 12 posi��es. 
Caso a palavra tenha mais do que 12 caracteres, mensagem de erro e retorna para nova digita��o.
O programa dever� apenas imprimir os caracteres com �ndice de valor �mpar.**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
char palavra[11];
int i=0, tam=0;
         
inicio:         
         puts("Digite uma palavra de at� 12 caracteres:  ");
              gets(palavra);     
         tam = strlen(palavra);
                      if(tam>12){
                           puts("\n\nErro a palavra deve conter no maximo 12 caracteres!!");
goto inicio;
}                                                                

           while(i <= tam){
			
			printf("\n%c", palavra[i]);
			i += 2;
			
		}
     puts ("\n");
system("pause");}
