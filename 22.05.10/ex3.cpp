#include <stdio.h>

int main(){
	float valor, taxa, tempo, prest;

	printf("Codigo para calcular a taxa.\n\n");

	printf("Digite o valor: R$");
	scanf("%f", &valor);
	printf("Digite a porcentagem da taxa: ");
	scanf("%f", &taxa);
	printf("Digite os dias de atraso: ");
	scanf("%f", &tempo);

	taxa = taxa/100;

	prest = valor+(valor*taxa*tempo);

	printf("\nO valor da prestacao com a taxa e' de R$ %.2f.", prest);
	
	return 0;
 }

