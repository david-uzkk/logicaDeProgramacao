#include <stdio.h>

int main() {
	int temp;
	
	printf("Digite a temperatura atual em C: ");
	scanf("%d", &temp);
	
	if (temp < 18) printf("Esta` frio!");
	if (temp > 18) printf("Esta` quente!");
	if (temp >= 18 && temp <=28) printf("A temperatura esta` agradavel.... ");

	return 0;
}
