#include <stdio.h>
#include <math.h>

int main(){
	int n1, n2, n3;
	printf("Digite o comprimento do cômodo em metros: ");
	scanf("%i", &n1);
	printf("\n Digite a largura em metros: ");
	scanf("%i", &n2);
	printf("\n Digite a altura: ");
	scanf("%i", &n3);
	int n4, n5, n6;
	n4= 2*(n1+n2)+2*(n2+n3)+2*(n1+n3);
	n5= n4*10%15;
	n6=n4*10/15;
	if(n5>0){
		printf("\n O número de caixas necessárias é: %f", ceil(n6));
	};
	else
	{printf("\n O número de caixas necessárias é: %f", n6)
	}
}
	