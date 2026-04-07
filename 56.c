#include <stdio.h>

int main (){
	float n1, n2, n3;
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("\n Digite o segundo número: ");
	scanf("%f", &n2);
	printf("\n Digite a operação de acordo com a legenda 1. Adição 2. Subtração 3. Divisão 4. Multiplicação");
	scanf("%f", &n3);
	if(n3==1){
		printf("\n O resultado da adição é: %f ", n1+n2);
	}
	if(n3==2){
		printf("\n O resultado da subtração é: %f", n1-n2);
	}
	if(n3==3 && n2==0){
		printf("\n Divisão não definida");
	}
	if(n3==3 && n2!=0){
		printf("\n Divisão igual a: %f", n1/n2);
	}
	if(n3==4){
		printf("\n Multiplicação igual a: %f", n1*n2);
	}
}