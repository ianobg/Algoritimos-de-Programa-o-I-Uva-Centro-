/*
Fazer um programa para que o usu�rio digite tr�s n�meros inteiros. O
usu�rio deve ser informado na tela do que ter� que digitar.
Os n�meros digitados n�o podem conter valores zero e nem serem
negativos (isso se aplica para os tr�s n�meros). Caso isso aconte�a, �
preciso exibir uma mensagem de erro para o usu�rio e retornar para uma
nova digita��o daquele valor err�neo.
Para o primeiro n�mero digitado s� podemos permitir a entrada de valores
m�ltiplos de tr�s. Caso n�o seja m�ltiplo de tr�s, exibir mensagem de erro
e retornar para nova entrada de dados.
Para o segundo n�mero, n�o h� nenhum tipo de restri��o. Qualquer
n�mero � valido.
Para o terceiro n�mero, s� poder� ser aceito n�meros pares. Caso seja
digitado um n�mero �mpar, o programa dever� tornar este n�mero par
atrav�s de uma opera��o aritm�tica.
Os tr�s n�meros digitados n�o podem ter valores iguais, caso haja n�mero
igual, exibir mensagem de erro e retornar para uma nova digita��o do
primeiro n�mero.
Diante dos tr�s n�meros v�lidos ap�s as cr�ticas executadas acima, o
programa dever� exibir na tela, nessa ordem: o menor n�mero, o n�mero
do meio e o maior n�mero.

*/

#include<stdio.h>
#include<stdlib.h>
main(){
int n1=0,n2=0,n3=0,maior=0,menor=0,meio=0;
                     numero1: 
//-------------------------------------->BLOCO NUMERO1
      printf("\n Digite um numero:  ");
      scanf("%d", &n1);
if (n1 <= 0 || n1%3 != 0) {
printf ("\n Erro N1");
       goto numero1; }
                    numero2: 
//-------------------------------------->BLOCO NUMERO2
printf("\n Digite outro numero:  ");
scanf("%d", &n2);
if (n2 <= 0) {
printf ("\n Erro N2");
goto numero2; }
                    numero3:
//-------------------------------------->BLOCO NUMERO2
printf("\n Digite um ultimo numero:  ");
scanf("%d", &n3);
if (n3 <= 0 || n3%2 != 0) 
n3 = n3 + 1;
//-------------------------------------->BLOCO VALIDA�AO GERAL 
if (n1 == n2 || n1 == n3 || n2 == n3) {
printf("\n ERRO GERAL!!!\n\n");
goto numero1; }
//-------------------------------------->BLOCO VALIDA��O MENOR MAIOR E MEIO
if((n1 > n2) && (n1> n3)&&(n2 > n3)) {
		 //if(n2 > n3) {
            maior = n1;
            meio = n2;
            menor = n3;
		 } else {
            maior = n1;
            meio = n3;
            menor = n2;
		 }

	 if((n2 > n1) && (n2 > n3)&&(n1 > n3)) {
//		if(n1 > n3) {
            maior = n2;
            meio = n1;
            menor = n3;

		} else {
            maior = n2;
            meio = n3;
            menor = n1;
		}

	    if((n3 > n1) && (n3 > n2)&&(n1 > n2)) {
//	    if(n1 > n2) {
            maior = n3;
            meio = n1;
            menor = n2;
	    } else {
	        maior = n3;
	        meio = n2;
	        menor = n1;
	    }



	printf("Menor = %d \tMeio = %d \tMaior = %d \t\n", menor, meio, maior);









system("pause");}
