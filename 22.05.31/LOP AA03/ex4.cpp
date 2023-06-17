#include <stdio.h>

int main()
{

    int x, y, z;

    printf("Digite o 1 valor: ");
    scanf("%d", &x);
    printf("Digite o 2 valor: ");
    scanf("%d", &y);
    printf("Digite o 3 valor: ");
    scanf("%d", &z);

    if (x < y && x < z)
    {
        printf("%d ", x);
    }
    else if (y < x && y < z)
    {
        printf("%d ", y);
    }
    else
    {
        printf("%d ", z);
    }

    if ((x < y && x > z) || (x > y && x < z))
    {
        printf("%d ", x);
    }
    else if ((y < x && y > z) || (y > x && y < z))
    {
        printf("%d ", y);
    }
    else
    {
        printf("%d ", z);
    }

    if (x > y && x > z)
    {
        printf("%d", x);
    }
    else if (y > x && y > z)
    {
        printf("%d", y);
    }
    else
    {
        printf("%d", z);
    }

    return 0;
}