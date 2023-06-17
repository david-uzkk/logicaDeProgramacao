#include <stdio.h>

int main(){
	float qui1, qui2, dis;
	
	printf("Codigo para dizer o tempo de uma viajem...\n\n");
	
	//a primeira cidade sempre tem que ser com o km menor
	
	printf("Digite o quilometro da primeira cidade: ");
	scanf("%f", &qui1);
	printf("Digite o quilometro da segunda cidade: ");
	scanf("%f", &qui2);
	
	dis= qui2-qui1;
	
	printf("Viajou com a velocidade de 40 km/h e durou %.1f horas.\n", (dis/40));
	printf("Viajou com a velocidade de 50 km/h e durou %.1f horas.\n", dis/50);
	printf("Viajou com a velocidade de 60 km/h e durou %.1f horas.\n", dis/60);
	printf("Viajou com a velocidade de 70 km/h e durou %.1f horas.\n", dis/70);
	printf("Viajou com a velocidade de 80 km/h e durou %.1f horas.\n", dis/80);
	
	return 0;
}
