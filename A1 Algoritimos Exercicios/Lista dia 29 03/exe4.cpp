/*4) Fazer um programa para reajustar o valor do sal�rio do funcion�rio. O sal�rio ser� informado em tempo de execu��o.
O programa dever� reajustar o sal�rio informado com base nas premissas da tabela abaixo.
O valor do sal�rio n�o pode ser menor do que 1.000,00 e nem maior do 7.000,00.
O Estado n�o pode ser diferente do que foi informado na tabela e nem o sexo.
 Caso algum erro aconte�a, mensagem de erro e retorna para digita��o daquela informa��o.


Estado        Sexo   Percentual Reajuste
Goias          f             10
Minas          f             14
Rio            m             26
Acre           f             39
Rondonia       m              8

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main(){setlocale (LC_ALL, "Portuguese");
float salario=0, reajuste=0;
char sexo[2], estado[20];

estadoini:
printf("Informe o estado\n");
scanf("%s",&estado);

if (strcmp(estado,"GO")==0||strcmp(estado,"MG")==0||strcmp(estado,"RJ")==0||strcmp(estado,"AC")==0||strcmp(estado,"RO")==0){
printf("tudo ok, continuando...\n");}
else{                              
printf("Informa��o do estado incorreta, favor informe um estado valido.\n\n\tEstado = 'GO','minas','RJ','AC' ou 'RO'\n\n");
goto estadoini;}
                              
sexoini:                              
printf("Informe o sexo\n");
scanf("%s",&sexo);
if (strcmp(sexo,"f")==0||strcmp(sexo,"m")==0){
printf("tudo ok, continuando...\n");}
else{                              
printf("Informa��o do sexo incorreta, favor informe um sexo valido.\n\n\tSexo = 'f' ou 'm'\n\n");
goto sexoini;}

salarioini:
printf("Informe o salario: \n");
scanf("%f",&salario);

if(salario < 1000 || salario > 7000){
    printf("\nSalario nao pode ser menor que 1.000 e nem maior que 7.000 . Tente novamente: \n");
    goto salarioini;
  }else

if (strcmp(estado,"GO")==0 && strcmp(sexo,"f")==0){
reajuste = salario * 0.10;
printf("\t\t\t****REAJUSTE ESTABELECIDO****\n\n\t\t\tSalario anterior R$%0.2f\n\t\t\tSalario reagustado R$%0.2f\n\n",salario,reajuste);}
else if (strcmp(estado,"MG")==0 && strcmp(sexo,"f")==0){
reajuste = salario * 0.14;
printf("\t\t\t****REAJUSTE ESTABELECIDO****\n\n\t\t\tSalario anterior R$%0.2f\n\t\t\tSalario reagustado R$%0.2f\n\n",salario,reajuste);}
else if (strcmp(estado,"RJ")==0 && strcmp(sexo,"m")==0){
reajuste = salario * 0.26;
printf("\t\t\t****REAJUSTE ESTABELECIDO****\n\n\t\t\tSalario anterior R$%0.2f\n\t\t\tSalario reagustado R$%0.2f\n\n",salario,reajuste);}
else if (strcmp(estado,"AC")==0 && strcmp(sexo,"f")==0){
reajuste = salario * 0.39;
printf("\t\t\t****REAJUSTE ESTABELECIDO****\n\n\t\t\tSalario anterior R$%0.2f\n\t\t\tSalario reagustado R$%0.2f\n\n",salario,reajuste);}
else if (strcmp(estado,"RO")==0 && strcmp(sexo,"m")==0){
reajuste = salario * 0.08;
printf("\t\t\t****REAJUSTE ESTABELECIDO****\n\n\t\t\tSalario anterior R$%0.2f\n\t\t\tSalario reagustado R$%0.2f\n\n",salario,reajuste);}
else{
puts("N�o foi possivel calcular o reajuste, favor entrar com valores validos...");
goto estadoini;}








system("pause");}
