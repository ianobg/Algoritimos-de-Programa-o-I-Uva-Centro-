/*01) Fa�a um programa para que o usu�rio informe tr�s n�meros. O
programa dever� calcular a media aritm�tica destes tr�s n�meros e
exibir o resultado em uma mensagem. */



#include<stdio.h>
#include<stdlib.h>

main()
{
float n1=0, n2=0, n3=0, med=0;

printf("\t\tDigite o valor da primeira nota:     ");
scanf("%f",&n1);

printf("\t\tDigite o valor da segunda nota:      ");
scanf("%f",&n2);

printf("\t\tDigite o valor da terceira nota:     ");
scanf("%f",&n3);

med = (n1+n2+n3) /3;

printf("\t\t\tA sua media e :   %f\n\n\n\n\n",med);


system("pause");
return 0;
}
