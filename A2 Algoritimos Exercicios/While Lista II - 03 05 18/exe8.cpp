/**8.	Fazer um programa para que o usu�rio digite uma palavra de at� 15 posi��es.
Caso a palavra tenha menos do que 6 caracteres e mais do que 15 caracteres, mensagem de erro e retorna para nova digita��o.
O programa dever� apenas imprimir os caracteres com �ndice de valor par. Ao final exibir a m�dia dos �ndices pares computados.
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
char palavra[14];
int i=1,tam=0,med=0,soma=0,aux=0;
                 inicio:
puts("Digite a Palavra com no minimo 6 caracteres e no maximo 15:  ");       
     fflush(stdin);
             gets(palavra);
                  tam=strlen(palavra);
                  
                      if(tam<6||tam>15){
                         puts("ERRO!!\tA palavra deve conter no minimo 6 caracteres e no maximo 15!\n\n");
               goto inicio;
}

                  while(i<=tam){
                       if(i%2!=0){
                          soma +=i;
                          aux++;        
                       printf("%c\n",palavra[i]);           
                                 } 
                   i++;                      
                                }  
                       med = soma / aux;
                       
printf("\nIndices: %i\tSoma: %i\tMedia:  %i\n\n ",aux,soma,med);                       
                                                    
       
       
       
system("pause");}
