#include <stdio.h>

int main(){
	float tempo, velocidade, distancia, litros;

	printf("Codigo para calcular litros de uma viagem.\n\n");

	printf("Quantas horas durou a viagem? "); //digite o tempo em horas
	scanf("%f", &tempo);
	printf("Qual foi a velocidade que viajou? "); //digite a velocidade em km/h
	scanf("%f", &velocidade);

	distancia = tempo * velocidade;
	litros = distancia / 12;

	printf("\n\nA velocidade media da viagem foi %.0fkm/h.\n", velocidade);
	printf("O tempo gasto na viagem foi %.1f horas.\n", tempo);
	printf("A distancia percorida na viagem foi %.0fkm.\n", distancia);
	printf("A quantidade de litros utilizado foi de %.1f litros.\n", litros);
	
	return 0;
 }

