#include <stdio.h>

int main(){
	float n1;
	printf("Digite o valod do seu raio em cm: ");
	scanf("%f", &n1);
	printf("\n A área do seu círculo em cm^2 é: %f", n1*n1);
	printf("π");
	printf("\n Ou, para π definido em 3.14, vale: %f", n1*n1*3.14);
}