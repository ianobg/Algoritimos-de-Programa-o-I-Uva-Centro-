/*Escreva um programa que pergunte o raio de uma circunfer�ncia, e
sem seguida mostre o di�metro, comprimento e �rea da
circunfer�ncia.
F�rmula:
diametro = 2 * raio;
comprimento = 2 * pi * raio;
area = pi * raio * raio;*/


#include<stdio.h>
#include<stdlib.h>

main (){
float diametro, pi=3.14, raio ,comprimento, area;
printf("Qual o raio da circunferencia?   ");
scanf("%f",&raio);

diametro=2*raio;
comprimento= 2*pi*raio;
area = pi * raio * raio;

printf("Diametro %.2f\n",diametro);
printf("Comprimento %.2f\n",comprimento);
printf("Area %.2f\n",area);


system("pause");
return 0;



     
     
     }
