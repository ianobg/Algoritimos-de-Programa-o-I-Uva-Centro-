/*6) Preencher um vetor com n�meros inteiros(8unidades);solicitar um n�mero do teclado.
Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor
e qual aordem foi digitada. Se n�o existir, imprimir mensagem que n�o existe.*/

#include<stdio.h>


main() {

	int vet[8];
	int i=0,num=0,a=0;


	for(i=0; i<8; i++) {
		printf("Preencha com numeros inteiros:  ");
		scanf("%d",&vet[i]);
	}

	puts("\n\n\n");
	puts("Numero a ser pesquisado:  ");
	scanf("%d",&num);

	for(i=0; i<8; i++) {
		if(vet[i]==num) {
			printf("O numero %d esta presente no vetor, na posicao %d\n",num,i);
			printf("O numero %d foi %d numero a ser digitado\n\n\n",num,i+1);
			a=1;
		}
	}
		if(a!=1){
			printf("Numero %d nao encontrado nos parametros do vetor",num);
		}


}
