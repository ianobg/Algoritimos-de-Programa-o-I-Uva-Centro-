/*----------- 02) Fazer um programa para que o usu�rio informe uma temperatura em graus Celsius e
                  transforme em graus Fahrenheit. Exibir o resultado da convers�o.
                  Formula: F = (9*C+160)/5 -------------*/
                  
                  
                  #include <stdio.h>
                  #include <stdlib.h>
                  
main()      
{
                              //declara��o das variaveis
            float gc=0, formula=0 ;
                      //entrada de Dados pelo usuario          
     printf ("Informe a temperatura em graus celsios:  ");
     scanf ("%f",&gc);
     
                     //Calculo da trasnforma��o dos dados     
     formula = (9*gc+160); 
  
                    //informa��o do resultado do calculo
     printf ("a temperatura em graus celsios e %fC\na temperatura convertida e de %fF\n",gc,formula);
     
      
                   //diretiva para pausar o sistema em determinado ponto      
system ("pause");

return 0;           
}            
