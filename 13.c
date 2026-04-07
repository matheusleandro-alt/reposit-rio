#include <stdio.h>
int main(){
	float n1;
	printf("Digite o valor de fábrica do carro em reais: ");
	scanf("%f", &n1);
	printf("\n O valor comercial do carro é: %f", n1+n1*28/100+n1*45/100);
}