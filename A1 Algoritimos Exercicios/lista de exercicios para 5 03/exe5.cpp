/*05) Fa�a um programa para que o usu�rio informe um n�mero e
fa�a o c�lculo da ter�a parte deste n�mero. Exibir os valores
informados e o resultado em uma �nica mensagem. */


#include<stdio.h>
#include<stdlib.h>


main()
{
     float n1;
     
     printf("Informe o numero:  ");
     scanf("%f",&n1);
     
     printf("A terceita parte de %f e %f\n\n",n1,n1/3);
     
     system("pause");
     return 0;
      
      }
