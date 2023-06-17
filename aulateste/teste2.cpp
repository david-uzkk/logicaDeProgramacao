#include <stdio.h>

int main()
{
	char nome[40];
	printf("Entre com o seu nome completo: ");
	gets(nome);
	printf("Nome: %s", nome);
	
	return 0;
}