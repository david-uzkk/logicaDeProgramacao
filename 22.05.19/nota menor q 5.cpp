#include <stdio.h>

int main() {
	int p1, p2, nf;
	
	printf("Digite a nota da P1: ");
	scanf("%d", &p1);
	
	if ((p1 >= 0) && (p1 <= 10)) {
		if(p1 < 5){
		printf("Reprovado! A nota P1 foi menor que 5.");
		}
		else printf("e a nota da P2: ");
		scanf("%d", &p2);
			if((p2 >= 0) && (p2 <= 10)) {
				nf = (p1+p2) / 2;
				printf("A nota final e' %d.", nf);
			}
			else printf ("Nota invalida.");			
	}
	else printf ("Nota invalida.");
	
	
	return 0;
}	
