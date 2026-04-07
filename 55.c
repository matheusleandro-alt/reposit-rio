#include <stdio.h> 

int main (){
	int n1, n2;
	printf("De 3 a 5, escreva o número de lados de seu polígono: ");
	scanf("%i", &n1);
	printf("\n Digite o valor do lado de seu polígono em cm: ");
	scanf("%i", &n2);
	if(n1==3){
		printf("Triângulo de perímetro em cm^2 igual a: %i", 3*n2);
	}
	if(n1==4){
		printf("\n Quadrado de árra em cm^2: %i", n2*n2);
	}
	if(n1==5){
		printf("\n Pentágono");
	}
	if(n1>5){
		printf("\n Polígono não identificado");
	}
	if(n1<3){
		printf("\n Não é um polígono");
	}
}