/*6) Fazer um programa para que o usu�rio opte por uma op��o de convers�o
�1 � Celsius 2 � Farenheit�.
Ap�s a escolha o usu�rio dever� informar a temperatura.
Criar uma nova fun��o para aplicar a convers�o conforme op��o escolhida.
F�rmulas:
C=5*(F-32)/9
F=(9*C/5) + 32
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float converte (int op , float temp){
 
 float tempr =0;
       if (op == 1){
          tempr = 5 *(temp - 32)/9;
          }else if (op == 2){
                tempr = (9 * temp / 5) + 32;
                }else{
                printf("Op��o Inv�lida!\n");}
}

int main(){setlocale(LC_ALL,"Portuguese");

float temp=0, tempr=0;
int op=0;

printf("escolha uma op��o parar convers�o:\n1- Farenheit \t2- Celsius\n");

scanf("%d",&op);

puts("informe a temperatura: \n");

scanf("%f",&temp);

tempr = converte(op, temp);

printf("Voc� escolheu a op��o %d. \nTemperatura convertida: %f \n", op, tempr);


system("pause");
return 0;}
