#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (dia >= 1 & dia <= 31)
    {
        if (mes <= 12 && mes >= 1)
        {
            if (mes == 1 && mes == 3 && mes == 5 && mes == 7 && mes == 8 && mes == 10 && mes == 12)
            {
                if (dia == 31)
                {
                    printf("Data valida!");
                }
                else
                {
                    printf("Data invalida!");
                }
            }
            else if (mes == 4 && mes == 6 && mes == 9 && mes == 11)
            {
                if (dia <= 30)
                {
                    printf("Data valida!");
                }
                else
                {
                    printf("Data invalida!");
                }
            }
            else
            {
                if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
                {
                    if (dia <= 29)
                    {
                        printf("Data valida!");
                    }
                    else
                    {
                        printf("Data invalida!");
                    }
                }
                else
                {
                    if (dia <= 28)
                    {
                        printf("Data valida!");
                    }
                    else
                    {
                        printf("Data invalida!");
                    }
                }
            }
        }

        else
        {
            printf("Data invalida!");
        }
    }

    else
    {
        printf("Data invalida");
    }

    return (0);
}