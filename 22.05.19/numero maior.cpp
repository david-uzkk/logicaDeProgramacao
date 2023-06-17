#include <stdio.h>

int main() 
	{
	int n1, n2, n3, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o tercero numero: ");
	scanf("%d", &n3);
	
	if (n1 > n2) maior = n1;
	else maior = n2;
	
	if (n3 > n2) maior = n3;
	
	printf("O maior numero e' o %d.", maior);
	
	return 0;
	}
