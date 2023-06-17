#include <stdio.h>
int main()
	{
		int n;
		printf ("Entre com um numero [0-4]: ");
		scanf("%d", &n);
		
		printf("Selecione a opcao desejada: ");
		printf("1 Inclusao");
		printf("2 Alteracao");
		printf("3 Sair");
		
		switch (n) {
			case 'I':
				printf("zero");				
			break;
			
			case 65:
				printf ("um");
			break;
		}
	}

