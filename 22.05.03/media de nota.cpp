#include <stdio.h>

int main()
{
	float num1, num2;
	
	printf("Digite a primeira nota:  ");
	scanf("%f", &num1);
	printf("Digite a segunda nota: ");
	scanf("%f", &num2);
	printf("A media entre as duas notas: %f", (num1+num2)/2);
	
	return 0;
}
