/*Solicitar salario, presta��o. Se presta��o for maior que 20% do
salario, imprimir:
Empr�stimo n�o pode ser concedido. Sen�o imprimir Empr�stimo
pode ser concedido.
F�rmula:
porcent = salbruto * 0.20;  */


#include <stdio.h>
#include <stdlib.h>

main(){
float porcent=0, sal=0, pret=0;

printf("Insira o salario:   "); 
scanf("%f",&sal);

printf("Insira a pretencao:  ");
scanf("%f",&pret);

porcent = sal *0.20;

if (pret > porcent)

printf("Emprestimo aprovado.");

else
printf("Emprestimo recusado.");

system("pause");
      
}
