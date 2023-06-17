#include <stdio.h>

int main() {
	float p1, p2, p3, maior, menor, nf;

	printf("Digite a nota da P1: ");
	scanf("%f", &p1);
	if (p1 >= 0 && p1 <= 10){
		printf("Digite a nota da P2: ");
		scanf("%f", &p2);
		if (p2 >= 0 && p2 <= 10){
			printf("Digite a nota da P3: ");
			scanf("%f", &p3);
			if (p3 >= 0 && p3 <= 10){
				if (p1 >= p2 && p1 >= p3) maior = p1;
					if (p2 <= p3) {menor = p2;}
					else menor = p3;
				if (p2 >= p1 && p2 >= p3) maior = p2;
					if (p1 <= p3) {menor = p1;}
					else menor = p3;
				if (p3 >= p1 && p3 >= p2) maior = p3;
					if (p1 <= p2) {menor = p1;}
					else menor = p2;
				nf = (p1+p2)/2;

				printf ("\nMenor nota (desconsiderada): %.2f\n", menor);
				printf ("Nota final (media aritmetica das duas maiores notas): %.2f\n", nf);

				if(nf >= 6) {
					printf("Situacao: Aprovado!");
				}
				if(nf < 4) {
					printf("Situacao: Reprovado!");
				}
				if(nf >= 4 && nf < 6 ) {
					printf("Situacao: IFA!");
				}
			}
			else printf("Nota P3 invalida!");
		}
		else printf("Nota P2 invalida!");
	}
	else printf("Nota P1 invalida!");


	return 0;
}
