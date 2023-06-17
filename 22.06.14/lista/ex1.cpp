#include <stdio.h>

int main()
{
    int i, n = 0;

    printf("Entre com a quantidade de [Ho] : ");
    scanf("%d", &i);

    do
    {
        printf("Ho");
        if (i > 0 && n < i-1)
        {
           printf("-");
        }
        n += 1;
    } while (i > n);
    printf(". Feliz Natal!!!");

    return 0;
}