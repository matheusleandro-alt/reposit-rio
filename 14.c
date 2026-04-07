#include <stdio.h>

int main(){
	float n1, n2, n3, n4;
	printf("Digite o número de carros vendidos: ");
	scanf("%f", &n1);
	printf("\n Digite o valor total de vendas em reais: ");
	scanf("%f", &n2);
	printf("\n Digite o salário em reais: ");
	scanf("%f", &n3);
	printf("\n Digite o valor da comissão por carro vendido em reais: ");
	scanf("%f", &n4);
	printf("\n O valor total ganho ao mês em reais foi: %f ", n3+n2*5/100+n1*n4);
}