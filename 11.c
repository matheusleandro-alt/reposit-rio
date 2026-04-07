#include <stdio.h>

int main(){
	float n1, n2, n3, n4;
	printf("Insira o número de eleitores: ");
	scanf("%f", &n1);
	printf("\n Insira o número de votos brancos: ");
	scanf("%f", &n2);
	printf("\n Insira o número de votos nulos: ");
	scanf("%f", &n3);
	printf("\nbInsira o número de votos válidos: ");
	scanf("%f", &n4);
	printf("\n A porcentagem de votos brancos: %f", n2*100/n1);
	printf("\n A porcentagem de votos nulos: %f", n3*100/n1);
	printf("\n A porcentagem de votos válidos: %f", n4*100/n1);
}