#include <stdio.h>

int main(){
	float preco, lucro, pix, cartao, cartao3;
	char produto[20], pagamento[20];

	printf("Codigo para calcular preco.\n\n");

	printf ("Digite o nome do produto: ");
	scanf ("%s", &produto);
	printf ("Digite o preco do produto: R$ ");
	scanf ("%f", &preco);
	printf ("Digite a margem de lucro: R$ ");
	scanf ("%f", &lucro);
	printf ("Digite a forma de pagamento: ");
	scanf ("%f", &pagamento);

	preco = preco+lucro;
	pix = preco-(preco*0.05);
	cartao = preco;
	cartao3 = preco+(preco*0.05); 

	printf ("\n\O valor do produto com o pagamento com pix e' R$ %.2f.", pix);
	printf ("\nO valor do produto com o pagamento com cartao e' R$ %.2f.", cartao);
	printf ("\nO valor do produto com o pagamento com cartao(3x) e' R$ %.2f.", cartao3);
	return 0;
 }