/*3) Fazer um programa para que o usu�rio digite dois n�meros. Fazer
a m�dia destes dois n�meros. O programa dever� verificar se a m�dia
dos n�meros est� entre o intervalo de valores de 15 e 37. Exibir
mensagem �Valor V�lido� para caso o n�mero esteja de acordo. Caso
negativo, exibir mensagem �N�mero Inv�lido�. Os n�meros digitados
n�o podem ser negativos. Caso sejam, exibir mensagem de erro e
retornar para nova digita��o daquele n�mero err�neo.*/

#include<stdio.h>
#include<stdlib.h>
main(){
	
	float a=0,b=0,media=0;
	inicio:
	
      printf("escreva o primeiro numero:  ");
      scanf("%f",&a);
      printf("escreva o segundo numero:  ");
      scanf("%f",&b);
      media= (a+b)/2;
      
      
           if (a < 0 || b < 0) {
   				printf("Nao Digite Numeros Negativos!!!\n");
   				goto inicio;
			}
          else if(media>=15 && media<=37){
		  	printf("%1.f = Valor Valido!\n",media);
          }
    	  else      
   			printf (" Valor Invalido...\n");
   		  	
 
   
	system("pause");   
	return 0;    
}
