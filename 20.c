#include <stdio.h>

int main(){
	float n1, n2, n3, n4;
	printf("Digite a marcação inicial do odômetro em Km: ");
	scanf("%f", &n1);
	printf("\n Marcação final: ");
	scanf("%f", &n2);
	printf("\n Quantidade de combustível gasto em litros: ");
	scanf("%f", &n3);
	printf("\n Digite o valor ganho dd passageiros em reais: ");
	scanf("%f", &n4);
	float n5, n6;
	n5 = (n2-n1)/n3;
	n6 = n4-(3*2.9);
	printf("\n A média de consumo em km/l é: %f", n5);
	printf("\n O lucro do dia em reais foi: %f", n6);
}