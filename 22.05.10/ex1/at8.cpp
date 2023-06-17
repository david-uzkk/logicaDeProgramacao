#include <stdio.h>

int main(){
	float ipi, codp1, valp1, quap1, codp2, valp2, quap2;
	
	printf("Codigo para informar o valor de produtos...\n\n");
	
	printf("Digite o valor de IPI: ");
	scanf("%f", &ipi);
	
	printf("Digite o codigo da peca 1: ");
	scanf("%f", &codp1);
	printf("Digite o valor unitario da peca 1: ");
	scanf("%f", &valp1);
	printf("Digite a quantidade da peca 1: ");
	scanf("%f", &quap1);
	
	printf("Digite o codigo da peca 2: ");
	scanf("%f", &codp2);
	printf("Digite o valor unitario da peca 2: ");
	scanf("%f", &valp2);
	printf("Digite a quantidade da peca 2: ");
	scanf("%f", &quap2);
	
	printf("O valor total a ser pago e' R$ %.1f.", ((valp1*quap1)+(valp2*quap2))*((ipi/100)+1));
	
	return 0;
}
