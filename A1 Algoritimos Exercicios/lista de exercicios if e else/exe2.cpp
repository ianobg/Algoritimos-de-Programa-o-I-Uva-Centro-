/*Para doar sangue � necess�rio ter idade maior que 20. Fa�a um
aplicativo na linguagem C que pergunte a idade de uma pessoa e
diga se ela pode doar sangue ou n�o. */




#include <stdio.h>
#include <stdlib.h>

main ()
{
int idade;

printf("Informe a idade do doador:  ");
scanf("%d",&idade);
if(idade<=20)
printf("%d anos nao e permitido doar\n",idade);
else 
printf("PARABENS\n");

system ("pause");

}
