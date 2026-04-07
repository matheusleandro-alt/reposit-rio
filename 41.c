#include <stdio.h>

int main (){
	float n1, n2;
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("\n Digite o segundo número: ");
	scanf("%f", &n2);
	if(n1==n2){
		printf("\n Números iguais");
	}
	else{
		if(n1>n2){
			printf("\n O primeiro é maior");
		}
		else{
			printf("\n O segundo é maior");
		}
	}
}