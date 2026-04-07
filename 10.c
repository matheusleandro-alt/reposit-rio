#include <stdio.h>

int main (){
	float n1, n2;
	printf("Salario em reais por hora: ");
	scanf("%f", &n1);
	printf("Carga horaria trabalhada: ");
	scanf("%f", &n2);
	printf("Ganho mensal: %f", n1*n2);
}
