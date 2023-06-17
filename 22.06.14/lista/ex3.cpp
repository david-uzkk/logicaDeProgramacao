#include <stdio.h>

int main()
{
    int numeroCaracteres = 0;
    char caractere[501] = getchar();

    while (caractere != '\n')
    {
        numeroCaracteres = numeroCaracteres + 1;
        char caractere[501] = getchar();
    }
    printf("%d\n", numeroCaracteres);
    return 0;
}