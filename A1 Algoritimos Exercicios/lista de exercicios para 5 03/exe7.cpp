/*07) Fa�a um programa para que o usu�rio informe o valor do
empr�stimo, o percentual da taxa e o tempo que ir� querer pagar. O
programa dever� calcular a presta��o a ser paga. Exibir os valores
invertidos em uma mensagem.
F�rmula: prestacao = valor + (valor * (taxa / 100) * tempo); */





#include<stdlib.h>
#include<stdio.h>


main ()

{
     float emp=0, taxa=0, temp=0, prestacao=0; 

     printf("Informe o Valor do Emprestimo:  ");
     scanf("%f",&emp);
     
     printf("Informe o percentual da taxa:    ");
     scanf("%f",&taxa);
     
     printf("Informe os dias de atrazo: ");
     scanf("%f",&temp);
     
     
     prestacao= emp + (emp*(taxa/100)* temp);
     
   
 
     printf("o valor final da pretencao e %f\n\n",prestacao);
     
     
     system("pause");
     
     return 0 ;
     
     
     
     }




