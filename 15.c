#include <stdio.h>

int main(){
	float n1;
	printf("Digite a sua temperatura em Fahrenheit: ");
	scanf("%f", &n1);
	printf("\n A sua temperatura em graus Celsius é: %f", 5*(n1-32)/9);
}