/**4.	Fazer um programa para exibir na tela todos os n�meros divis�veis por 4 que sejam menores que 200.**/

#include<stdio.h>
#include<stdlib.h>


main(){
int i=0;


while(i>=0&&i<=199){
i++;
if(i%4==0){
printf("%i\n\n",i);
}


}
system("pause");}
