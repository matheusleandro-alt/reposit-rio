#include <stdio.h>
#include <math.h>

int main(){
	int n1, n2, n3;
	printf("Digite a potência de cada lâmpada em Watts: ");
	scanf("%f", &n1);
	printf("\n Digite a largura do cômodo em metros: ");
	scanf("%f", &n2);
	printf("\n Digite o comprimento do cômodo em metros: ");
	scanf("%f", &n3);
	int n4, n5;
	int arredondamento;
	n4==(18*n2*n3)%n1;
	n5==(18*n2*n3)/n1;
	arredondamento==ceil(n5);
	if(n4>0){
		printf("\n A quantidade de lâmpadas necessárias é: %f", arredondamento);
	}
	else{
		printf("\n A quantidade de lâmpadas necessárias é: %f", n5);
	}
}	