#include <stdio.h>

int main(){
	float n1, n2, n3;
	printf("Digite a nota da primeira avaliação: ");
	scanf("%f", &n1);
	printf("\n Digite a nota da segunda avaliação: ");
	scanf("%f", &n2);
	printf("\n Digite a nota da avaliação optativa. Em caso de não realização, insira o valor -1: ");
	scanf("%f", &n3);
	if(n3!=-1 && n1>=n2){
		float n4;
		n4 = (n1+n3)/2;
		if(n4>=6){
			printf("\n Aprovado");
		}
		if(n4<3){
			printf("\n Reprovado");
		}
		if(n4>=3 && n4<6){
			printf("\n Exame");
		}
	}
			
	if(n3!=-1 && n2>n1){
		float n4;
		n4 = (n2+n3)/2;
		if(n4>=6){
			printf("\n Aprovado");
		}
		if(n4<3){
			printf("\n Reprovado");
		}
		if(n4>=3 && n4<6){
			printf("\n Exame");
		}
	}	
	if(n3==-1){
		float n4;
		n4 = (n1+n2)/2;
		if(n4>=6){
			printf("\n Aprovado");
		}
		if(n4<3){
			printf("\n Reprovado");
		}
		if(n4>=3 && n4<6){
			printf("\n Exame");
		}
	}
}	
