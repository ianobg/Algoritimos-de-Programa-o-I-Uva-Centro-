/*2) Fazer um programa para que o usu�rio digite tr�s n�meros e o
programa dever� verificar qual � o n�mero do meio. Exibir
mensagem com o n�mero. O programa n�o poder� aceitar valor zero
para nenhum dos tr�s n�meros. Criticar, dar mensagem de erro e
retornar para nova digita��o daquele n�mero err�neo.*/


#include<stdio.h>
#include<stdlib.h>
main(){
	
	int a=0,b=0,c=0;
	inicio:
	
      printf("escreva o primeiro numero:  ");
      scanf("%d",&a);
      printf("escreva o segundo numero:  ");
      scanf("%d",&b);
      printf("escreva o terceiro numero:  ");
      scanf("%d",&c);
      
           if (a==0 || b==0 || c==0){
   				printf("Nao Digite 0 Seu Jumento!!!\n");
   				goto inicio;
			}
          else if(a>b && b>c || b>a && b<c){
		  	printf("%d e o numero do meio\n",b);
          }
    	  else if (b>c && c>a || b<c && c>a){      
   			printf ("%d e o numero meio\n",c);
   		  }		
          else if (c>a && a>b || c<a && a<b){
		   printf("%d e o maior numero\n",a);
		  }else {
		  	printf("Todos os numeros sao iguais");
		  }
   
	system("pause");   
	return 0;    
}
