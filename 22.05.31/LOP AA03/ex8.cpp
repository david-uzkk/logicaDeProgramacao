#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;

    printf("Digite o valor de x1: ");
    scanf("%d", &x1);
    printf("Digite o valor de y1: ");
    scanf("%d", &y1);
    printf("Digite o valor de x2: ");
    scanf("%d", &x2);
    printf("Digite o valor de y2: ");
    scanf("%d", &y2);
    printf("Digite o valor de x3: ");
    scanf("%d", &x3);
    printf("Digite o valor de y3: ");
    scanf("%d", &y3);

    if (((y3 - y1) / (x3 - x1)) == ((y2 - y3) / (x2 - x3)))
    {
        printf("\nOs pontos pontos estao alinhados!");
    }
    else
    {
        printf("\nOs pontos nao estao alinhados!");
    }

    return 0;
}