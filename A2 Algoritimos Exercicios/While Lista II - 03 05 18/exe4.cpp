/**4.	Fazer um programa que pergunte ao usu�rio quantos alunos tem na sala dele.
O n�mero digitado n�o pode ser zero e nem negativo. Caso seja, mensagem de erro e retorna para nova digita��o.
Em seguida, atrav�s de um "while", pede ao usu�rio para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a m�dia, aritm�tica, da turma.**/

#include<stdio.h>
#include<stdlib.h>

main(){
int i=0,alunos=0,nota=0,soma=0;
float media=0;

alunosini:
puts("Digite o numero de alunos na sala");
scanf("%d",&alunos);

if(alunos<=0){
puts("Numero de alunos na sala deve ser maior que zero!");
goto alunosini;}

while (i<alunos){
puts("Digite a nota do aluno");
scanf("%d",&nota);
soma = soma + nota;
i++;
}

media = soma/alunos;
printf("a media da sala e :  %f",media);
       
system("pause");}
