#include <stdio.h>

int main(){
	int valor, milha, centena, dezena, unidade;
	
	printf("Codigo para inverter um valor...\n\n");
	
	printf("Digite o valor de 4 digitos: ");
	scanf("%d", &valor);

	milha = valor/1000;
	centena = valor%1000;
	dezena = centena%100;
	unidade = dezena%10;
	centena = centena/100;
	dezena = dezena/10;

	
	printf("O valor final invertido e' %d%d%d%d.", unidade, dezena, centena, milha);

	return 0;
}
