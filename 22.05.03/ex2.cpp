#include <stdio.h>

int main()
{
	float num1, num2, peso1, peso2, rpeso, peso1r, peso2r;
	
	rpeso = 10;
	printf("Digite a primeira nota: ");
	scanf("%f", &num1);
	printf("Digite o peso da primeira prova: ");
	scanf("%f", &peso1);
	peso2 = rpeso-peso1;
	printf("Digite a segunda nota: ");
	scanf("%f", &num2);
	peso1r= peso1*0.1;
	peso2r= peso2*0.1;
	printf("A media entre as duas notas: %f", (num1*peso1r)+(num2*peso2r));
	
	
	return 0;
}
