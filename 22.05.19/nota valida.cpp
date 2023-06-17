#include <stdio.h>
int main()
	{
	float p1, p2, nf;
	printf ("Entre com a nota P1: ");
	scanf ("%f", &p1);
	if ((p1 >= 0) && (p1 <= 10))
		{
		printf ("Entre com a nota P2: ");
		scanf ("%f", &p2);
		if ((p2 >= 0) && (p2 <= 10))	
			{
			nf = (p1 + p2) / 2;
			printf ("\nNota Final: %.1f", nf);
			if (nf >= 6) printf ("\n\tAPROVADO");
				else printf ("\n\tREPROVADO");
			}
		else printf ("Nota invalida!");
		}
	else printf ("Nota invalida!");
	return 0;
 	}		
