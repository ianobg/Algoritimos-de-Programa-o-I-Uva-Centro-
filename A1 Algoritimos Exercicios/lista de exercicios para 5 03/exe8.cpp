/*08) Fa�a um programa para que o usu�rio informe o valor do d�lar,
o valor da taxa de convers�o e o programa dever� converter o valor
do d�lar informado em um valor em real. Exibir o valor do real
obtido em uma mensagem.
F�rmula: real = dolar * taxa; */


#include<stdio.h>
#include<stdlib.h>

main()
{
      
float dolar=0, taxa=0, real=0;

printf("Valor Dolar:  ");
scanf("%f",&dolar);

printf("Valor Taxa:   ");
scanf("%f",&taxa);

real= taxa * dolar;

printf("O valor em Real e:  %f\n\n\n",real);


system("pause");
return 0;



}
