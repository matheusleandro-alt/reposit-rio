#include <stdio.h>

int main (){
	float n1, n2, n3;
	printf("Digite o primeiro ângulo: ");
	scanf("%f", &n1);
	printf("\n Digite o segundo ângulo: ");
	scanf("%f", &n2);
	printf("\n Digite o terceiro ângulo: ");
	scanf("%f", &n3);
	if(n1+n2+n3!=180){
		printf("\n Não é um triângulo");
	}
	else{
		if(n1>90 || n2>90 || n3>90){
			printf("\n Obtusângulo");
		}
		if(n1==90 || n2==90 || n3 == 90){
			printf("\n Retângulo");
		}
		if(n1<90 && n2<90 && n3<90){
			printf("\n Acutângulo");
		}
	}
}