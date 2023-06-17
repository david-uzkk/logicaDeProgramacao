#include <stdio.h>

int main()
{
    int x, y, z, nfinal;

    printf("Nota do trabalho: ");
    scanf("%d", &x);
    
    if (x >= 0 && x <= 10)
    {
        printf("Nota prova escrita: ");
        scanf("%d", &y);
        if (y >= 0 && y <= 10)
        {
            printf("Nota do laboratio: ");
            scanf("%d", &z);
            if (z >= 0 && z <= 10){
                nfinal = (x * 0.2) + (y * 0.5) + (z * 0.3);

                if (nfinal >= 0 && nfinal < 4) {
                    printf("Reprovado.");
                }
                else if (nfinal >= 4 && nfinal < 7) {
                    printf(".Exame final.");
                }
                else {
                    printf("Aprovado.");
                }
            }
            else {
            printf("Nota invalida");
        }
        }
        else {
            printf("Nota invalida");
        }
    }
    else {
            printf("Nota invalida");
        }

    return 0;
}