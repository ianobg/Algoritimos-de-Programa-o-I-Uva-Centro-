/*02) Fa�a um programa para que o usu�rio informe tr�s n�meros. O
programa dever� calcular o produto dos dois n�meros informados.
Exibir o resultado em uma mensagem.
F�rmula: n1 * n2   */ 



#include <stdio.h>
#include <stdlib.h>

main ()

{
     
int n1=0, n2=0, prod=0;

printf ("\t\tDigite um valor:    ");
scanf ("%d",&n1);

printf("\t\tDigite outro valor:  "); 
scanf("%d",&n2);

prod= n1*n2;

printf("O resuldado do produto dos valores %d e %d equivale a %d\n\n\n",n1,n2,prod);

system("pause");    
return 0;


     
     
     
     
     
     
     
     
     
     
     
     
     }


