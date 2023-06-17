#include <stdio.h>
#include <conio.h>

int main() {
	int num1, num2;
	char op;

	printf ("Escolha dois numeros inteiros separados por espaco: ");
	scanf("%d%d", &num1, &num2);

	printf("Escolha o operador ( + - * / % ): ");
	op = getche ();

	if (op == '+' ) printf("\n%d + %d = %d", num1, num2, num1+num2);
	if (op == '-' ) printf("\n%d - %d = %d", num1, num2, num1-num2);
	if (op == '*' ) printf("\n%d * %d = %d", num1, num2, num1*num2);
	if (op == '/' ) printf("\n%d / %d = %d", num1, num2, num1/num2);
	if (op == '%' ) printf("\n%d % %d = %d", num1, num2, num1%num2);

	return 0;
}
