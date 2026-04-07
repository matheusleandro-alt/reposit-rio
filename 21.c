#include <stdio.h>

int main(){
	float n1, n2, n3, n4;
	printf("Digite o conprimento da pista em metros: ");
	scanf("%f", &n1);
	printf("\n Digite o número de voltas: ");
	scanf("%f", &n2);
	printf("\n Digite o número de reabastecimentos desejados: ");
	scanf("%f", &n3);
	printf("\n Digite o consumo de combustível do carro em km/L: ");
	scanf("%f", &n4);
	float n5;
	n5 = (n1*n2)/(n3*n4);
	printf("\n A quantidade de litros necessária é: %f ", n5);
}