#include <stdio.h>

int main() {
    float preco, desconto, trespordois;

    printf ("Digite o preco do produto: ");
    scanf("%f", &preco);
    desconto = preco-(preco*0.20);
    trespordois = (preco*2)/3;
    printf ("1x %.2f = %.2f\n", preco, preco);
    printf ("2x %.2f = %.2f\n", desconto, desconto*2);
    printf ("3x %.2f = %.2f", trespordois, preco*2);

    return 0;
}