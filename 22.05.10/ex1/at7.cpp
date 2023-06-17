#include <stdio.h>

int main(){
	
	printf("Codigo para dizer seus tempo de vida em dias...\n\n");
	
	int ano, mes, dia;
	
	printf("Quantos anos voce tem?\n");
	scanf("%d", &ano);
	printf("E quantos meses?\n");
	scanf("%d", &mes);
	printf("E quantos dias?\n");
	scanf("%d", &dia);
	
	printf("A sua idade total em dias e': %d dias.", (ano*365)+(mes*30)+dia);
	
	return 0;
}
