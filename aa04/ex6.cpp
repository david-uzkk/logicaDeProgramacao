#include <stdio.h>

int main()
{
    int n, s = 0, d = 1;

    printf("Digite o numero: ");
    scanf("%d", &n);

    while (d < n)
    {
        if (n % d == 0)
        {
            s = d + s;
            d++;
        }
        else
            d++;
    }

    if (n == s)
    {
        printf("\nO numero %d e' perfeito!", n);
    }
    else
        printf("\nO numero %d nao e' perfeito!", n);
    return 0;
}