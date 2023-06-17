#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2;
    char op;

    printf("Escolha o primeiro numero: ");
    scanf("%d", &n1);
    printf("Escolha o segundo numero: ");
    scanf("%d", &n2);

    printf("Escolha o operador ( + - * / %% ): ");
    op = getche();

    if (op == '+')
    {
        printf("\n%d + %d = %d", n1, n2, n1 + n2);
    }
    else if (op == '-')
    {
        printf("\n%d - %d = %d", n1, n2, n1 - n2);
    }
    else if (op == '*')
    {
        printf("\n%d * %d = %d", n1, n2, n1 * n2);
    }
    else if (op == '/')
    {
        printf("\n%d / %d = %d", n1, n2, n1 / n2);
    }
    else if (op == '%')
    {
        printf("\n%d %% %d = %d", n1, n2, n1 % n2);
    }
    else
    {
        printf("\nOperador invalido.");
    }

    return 0;
}