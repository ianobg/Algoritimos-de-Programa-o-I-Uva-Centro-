/*04) Fa�a um programa para que o usu�rio informe dois n�meros. O
programa dever� calcular a soma destes n�meros e depois calcular
a diferen�a entre eles. Exibir os resultados da soma e da subtra��o
em uma �nica mensagem. Os valores informados dever�o aparecer
na mensagem.*/



#include<stdio.h>
#include<stdlib.h>

main ()
{
     
int n1=0,n2=0,res1=0,res2=0;

printf("Digite o primeiro valor:   ");
scanf("%d",&n1);

printf("Digite o segundo valor:    ");
scanf("%d",&n2);

res1= n1+n2;

res2=n1-n2;

printf("O Resultado da soma dos valores %d e %d equivale a %d \nEntretanto a subitracao deste mesmos valores e de %d\n\n\n\n",n1,n2,res1,res2);

system("pause");
return 0;


}
