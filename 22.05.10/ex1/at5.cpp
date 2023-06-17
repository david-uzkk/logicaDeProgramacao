#include <stdio.h>

int main(){
	float far;
	
	printf ("Codigo para conversao de graus Farenheit para Celcius\n\n");
	
	printf ("Digite o valor em graus Farenheit: ");
	scanf("%f", &far);
	
	printf("O valor em Celcius e' %.1f.", (far-32)*5/9);
	
	return 0;
 }

