#include <stdio.h>

int main(){
	float n1, n2, n3;
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	printf("\n Digite o segundo valor: ");
	scanf("%f", &n2);
	printf("\n Digite o terceiro valor: ");
	scanf("%f", &n3);
	if(n1>n2 && n2>n3){
		printf("\n %f", n1);
		printf("\n %f", n2);
		printf("\n %f", n3);
	}
	if(n1>n3 && n3>n2){
		printf("\n %f", n1);
		printf("\n %f", n3);
		printf("\n %f", n2);
	}
    if(n2>n3 && n3>n1){
		printf("\n %f", n2);
		printf("\n %f", n3);
		printf("\n %f", n1);
	}
    if(n2>n1 && n1>n3){
		printf("\n %f", n2);
		printf("\n %f", n1);
		printf("\n %f", n3);
	}
	 if(n3>n1 && n1>n2){
		printf("\n %f", n3);
		printf("\n %f", n1);
		printf("\n %f", n2);
	}
	if(n3>n2 && n2>n1){
		printf("\n %f", n3);
		printf("\n %f", n2);
		printf("\n %f", n1);
	}
}