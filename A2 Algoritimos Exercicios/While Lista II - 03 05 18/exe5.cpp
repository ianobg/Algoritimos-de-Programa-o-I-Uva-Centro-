/**5.Fazer um programa que solicite 10 n�meros ao usu�rio, atrav�s de um "while",
 e ao final mostre os dois maiores n�meros digitados pelo usu�rio.**/
 
#include <stdlib.h>
#include <stdio.h>

main() {
	int aux = 1,i = 0, maior = 0, menor = 0, num[19],meio=0;
	
		printf("Informe um numero: ");
		scanf("%i", &num[i]);
		
		menor = num[i];
		maior = num[i];
		
		while(aux < 10){
			i++;
				printf("Informe um numero: ");
				scanf("%i", &num[i]);
						
					if(num[i] > maior){						
						meio = maior;
                        maior = num[i];}      						
												
					else if(num[i] > meio) {
						meio = num[i];
					}
											
			aux++;			
		}
		
		printf("O maior numero eh %i\nO menor numero eh %i.", maior, meio);

system("pause");}
