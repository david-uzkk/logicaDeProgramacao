#include <stdio.h>

int main()
	{
		int num1, num2;
		
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
		printf("Digite o segundo numero: ");
		scanf("%d", &num2);
		printf("O resultado da soma entre o primeiro e segundo multiplicado pelo quadrado do segundo e: %d", (num1+num2)*(num2*num2));
		
		return 0;
	}
