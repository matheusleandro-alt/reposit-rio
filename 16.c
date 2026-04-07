#include <stdio.h>

int main(){
	float n1, n2, n3;
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	printf("\n Digite sua segunda nota: ");
	scanf("%f", &n2);
	printf("\n Digite sua terceira nota: ");
	scanf("%f", &n3);
	printf("\n A sua média final é: %f", (n1*2+n2*3+n3*5)/10);
}