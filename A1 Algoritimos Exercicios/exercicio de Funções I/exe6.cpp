/*6) Fazer uma nova fun��o que recebe um valor inteiro
e verifica se o valor � positivo ou negativo.
Exibir a mensagem dizendo se o n�mero � positivo ou negativo.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int valor (int n1){

if(n1<0)
printf("Valor � negativon\n\n\n");
else
printf("Valor � positivo\n\n\n");    
}

main(){setlocale (LC_ALL, "Portuguese");
int n1=0;
printf("Digite um valor inteiro pegativo ou positivo:   ");
scanf("%d",&n1);
    
    valor (n1);
system("pause");}
