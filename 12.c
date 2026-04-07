#include <stdio.h>

int main(){
	float n1, n2;
	printf("Digite o salário mensal em reais: ");
	scanf("%f", &n1);
	printf("\n Digite o percentual de reajuste: ");
	scanf("%f", &n2);
	printf("\n O valor do novo salário em reais é: %f", (n1*n2)/100 + n1);
}