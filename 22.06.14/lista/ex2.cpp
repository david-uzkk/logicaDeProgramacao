#include <stdio.h>

int main()
{
    float p1, p2, nf;

    printf("Entre com a nota P1: ");
    scanf("%f", &p1);

    while (p1 < 0 || p1 > 10)
    {
        printf("Nota Invalida!\n");
        printf("Entre com a nota P1: ");
        scanf("%f", &p1);
    }

    printf("Entre com a nota P2: ");
    scanf("%f", &p2);
    while (p2 < 0 && p2 > 10)
    {
        printf("Nota Invalida!\n");
        printf("Entre com a nota P2: ");
        scanf("%f", &p2);
    }

    nf = (p1 + p2) / 2;
    printf("\nNota Final: %.1f", nf);

    if (nf >= 5)
        printf(" - Aprovado\n");
    else
        printf(" - Reprovado\n");
    if (nf > 9)
    {
        printf("Conceito : E");
    }
    else if (nf >= 6 && nf < 9)
    {
        printf("Conceito : B");
    }
    else if (nf >= 5 && nf < 6)
    {
        printf("Conceito : R");
    }
    else
    {
        printf("Conceito : F");
    }
    return 0;
}
