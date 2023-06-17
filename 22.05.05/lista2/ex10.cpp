#include <stdio.h>

int main() {
    float comp, larg, valo, prec;

    printf("Digite o comprimento: ");
    scanf("%f", &comp);
    printf("Digite a largura: ");
    scanf("%f", &larg);
    printf("Digite o valor do metro linear: R$ ");
    scanf("%f", &valo);

    printf("O valor total fica em R$ %.2f", ((comp*valo)*2)+((larg*valo)*2));

    return 0;
}