#include <stdio.h>

int main() 
	{
	int nasc, idade;
	
	printf("Digite o ano em que voce nasceu: ");
	scanf("%d", &nasc);
	
	idade = 2022 - nasc;
	
	if ( idade >= 18)
		printf("Aprovado! pode entrar.");
		else printf("Reprovado! Nao pode entrar.");
	
	return 0;
	}

