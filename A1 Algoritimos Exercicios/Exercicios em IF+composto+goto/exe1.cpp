/*Fazer um programa para que o usu�rio digite tr�s n�meros e o
programa dever� verificar qual � o maior n�mero. Exibir mensagem
com o maior n�mero.
*/
#include<stdio.h>
#include<stdlib.h>
main(){
float a=0,b=0,c=0;

      printf("escreva o primeiro numero:  ");
      scanf("%f",&a);
      printf("escreva o segundo numero:  ");
      scanf("%f",&b);
      printf("escreva o terceiro numero:  ");
      scanf("%f",&c);

if(a>b && a>c )
printf("%1.f e o maior numero\n",a);
else if (b>c && b>a)      
printf ("%1.f e o maior numero\n",b);
else if (c>a && c>b)
printf("%1.f e o maior numero\n",c);


system("pause");
}
