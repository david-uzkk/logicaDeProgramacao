#include <stdio.h>

int main(){
	float nota1, nota2, nota3, notaf;
	char matricula[20];

	printf("Codigo para calcular a nota final.\n\n");

	printf("Digite a matricula do aluno : ");
	scanf("%s", &matricula);

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);

	printf("\nO aluno da matricula %s tirou a nota final de %.1f.", matricula, (nota1+nota2+nota3)/3);
	
	return 0;
 }