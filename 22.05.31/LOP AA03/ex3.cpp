#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    if (x + y > z && x + z > y && y + z > x)
    {
        if ((x == y && x == z) || (y == x && y == z) || (z == x && z == y))
        {
            printf("Triangulo equilatero");
        }
        else if ( x == y || x == z || y == x || y == z || z == x || z == y)
        {
            printf("Triangulo Isoscelos");
        }
        else
        {
            printf("Triangulo Escaleno");
        }
    }
    else{
        printf("Nao e' um triangulo");
    }
    return (0);
}