#include <stdio.h>

int main()
{
    float i, preco=15, lucro, despesa=600, ingre=120;

    printf("===========================================\n");
    printf("| QUANTIDADE  |   PRECO    |    LUCRO     |\n");
    printf("|     DE      |    DOS     |    TOTAL     |\n");
    printf("| INGRESSOS   | INGRESSOS  |    GANHO     |\n");
    printf("|=========================================|\n");

    for(i=0; i < 5; i++) {
        lucro = (preco * ingre) - despesa;
        printf("|     %.0f     |", ingre);

        if (i < 2) printf("  R$ %.2f  ", preco);
        else printf("  R$ %.2f   ", preco);

        if (i == 0 || i == 1) printf("|  R$ %.2f  |\n", lucro);
        else if (i == 2 || i == 3) printf("|  R$ %.2f   |\n", lucro);
        else printf("|  R$ %.2f    |\n", lucro);

        preco -= 3;
        ingre += 26;
    } 

    printf("===========================================");
    return 0;
}