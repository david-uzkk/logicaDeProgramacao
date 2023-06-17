#include <stdio.h>

int main(){
	float n;
	
	printf ("Digite o valor kg do ouro: ");
	scanf ("%f", &n);
	printf ("5 g: R$ %f\n", (5*n)/n);
	printf ("10 g: R$ %f\n", (10*n)/n);
	printf ("20 g: R$ %f\n", (20*n)/n);
	return 0;
}
