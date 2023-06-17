#include <stdio.h>

float resto(int a, int b, int c, int d1, int d2, int e){
	return(((a+b+c+d1+d2-2)*e)%7);
}

float trunca(float a){
	return ((2.6*a)-0.1);
}

float quociente(int a, int b){
	return (a%b);
}


int main(){

	float d, m, a, s;
	int semana;

	printf("Codigo para dizer dia da semana.\n\n");

	printf("*------MES-------*\n");
	printf("|================|\n");
	printf("| 1 |  MARCO     |\n");
	printf("| 2 |  ABRIL     |\n");
	printf("| 3 |  MAIO      |\n");
	printf("| 4 |  JUNHO     |\n");
	printf("| 5 |  JULHO     |\n");
	printf("| 6 |  AGOSTO    |\n");
	printf("| 7 |  SETEMBRO  |\n");
	printf("| 8 |  OUTUBRO   |\n");
	printf("| 9 |  NOVEMBRO  |\n");
	printf("| 10|  DEZEMBRO  |\n");
	printf("| 11|  JANEIRO   |\n");
	printf("| 12|  FEVEREIRO |\n");
	printf("|================|\n\n");

	printf("Digite o dia: ");
	scanf("%f", &d);
	printf("Digite o mes: ");
	scanf("%f", &m);
	printf("Digite os primeiros dois digitos do ano: ");
	scanf("%f", &s);
	printf("Digite os ultimos dois digitos do ano: ");
	scanf("%f", &a);
	

	semana = resto(trunca(m),d,a,quociente(a,4),quociente(s,4),s);

	printf("\nO dia da semana e' %d.\n\n", semana);

	printf("*-----SEMANA-----*\n");
	printf("|================|\n");
	printf("| 0 |  DOMINGO   |\n");
	printf("| 1 |  SEGUNDA   |\n");
	printf("| 2 |  TERCA     |\n");
	printf("| 3 |  QUARTA    |\n");
	printf("| 4 |  QUINTA    |\n");
	printf("| 5 |  SEXTA     |\n");
	printf("| 6 |  SABADO    |\n");
	printf("|================|\n");

	return 0;
 }