/*Fazer um programa para c�lculo de convers�o de valores para viagem ao exterior.
 O programa dever� converter para a moeda o valor em real informado pelo viajante
 conforme pa�s escolhido na tabela.
 PA�S VALOR MOEDA
Russia    USA      Paquistao   Egito   Italia
1.68      3.27       0.57      1.25     4.51
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 #include<string.h>
 
 main(){setlocale(LC_ALL, "Portuguese");
 float real,moeda;
 char pais[30];
 inicio1:
 printf("Informe o pais de destino: \n");
 scanf("%s",&pais);
 
 printf("Informe o valor do saldo em Reais R$:  \n");
 scanf("%f",&real);
 
 if(strcmp(pais,"paquistao")==0){
 moeda = real /0.57;
 printf("seu saldo atual na moeda do pais selecionado �->\nPais selecionado %s\nValor do saldo na moeda local do pais %0.2f\n",pais,moeda);}
 
else  if(strcmp(pais,"usa")==0 || strcmp(pais,"USA")==0){
 moeda = real / 3.27;
 printf("seu saldo atual na moeda do pais selecionado �->\nPais selecionado %s\nValor do saldo na moeda local do pais %0.2f\n",pais,moeda);}
 
 else  if(strcmp(pais,"egito")==0){
 moeda = real / 1.25;
 printf("seu saldo atual na moeda do pais selecionado �->\nPais selecionado %s\nValor do saldo na moeda local do pais %0.2f\n",pais,moeda);}
 
 else  if(strcmp(pais,"italia")==0){
 moeda = real / 4.51;
 printf("seu saldo atual na moeda do pais selecionado �->\nPais selecionado %s\nValor do saldo na moeda local do pais %0.2f\n",pais,moeda);}
 
  else  if(strcmp(pais,"russia")==0){
 moeda = real / 1.68;
 printf("seu saldo atual na moeda do pais selecionado �->\nPais selecionado %s\nValor do saldo na moeda local do pais %0.2f\n",pais,moeda);}
 else{
 printf("ERRO!! \nentre novamente com as informa��es\n\n\n");
 goto inicio1;}
    
 
 
 
 system("pause");}
