/*03) Fa�a um programa para que o usu�rio informe dois n�meros. O
programa dever� calcular a divis�o entre esses dois n�meros e
calcular o resto da divis�o. Exibir o resultado do resto da divis�o
em uma mensagem.
F�rmula:
 q = x / y;
 r = x - y * q;     */ 
 
 
 
#include <stdio.h>
#include <stdlib.h>

main ()

{
     int q=0, x=0 ,y=0 ,r=0;
     
     printf("\t\tDigite o valor de X:      ");
     scanf("%d",&x);
     
     printf("\t\tDigite o valor de Y:      ");
     scanf("%d",&y);
     
     
     q = x / y;
     r = x - y * q;
     
     printf("\t\tO resto desta divisao e:  %d\n\n\n\n",r); 
     
     system("pause");
     return 0;
     

     
     
     
     
     
     
     
     }
