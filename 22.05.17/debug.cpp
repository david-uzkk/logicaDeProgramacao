#include <stdio.h>

int main()
	{
		
	float p1, p2, nf;
	
	printf("Digite a primeira nota: ");
	scanf ("%f", &p1);
	printf("Digite a segunda nota: ");
	scanf ("%f", &p2);
	
	printf ("\nNota Final: %.1f", (p1 + p2) / 2);
	return (0);
	}

