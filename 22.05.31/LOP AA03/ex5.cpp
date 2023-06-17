#include <stdio.h>

int main()
{
    float salario;

    printf ("Digite o valor do salario: R$ ");
    scanf ("%f", &salario);

    if (salario < 500)
    {
        salario += salario*0.15;
        printf("\nO valor do novo salario e' R$ %.2f.", salario);
    }
    else if (salario >= 500 && salario <= 1000)
    {
        salario += salario*0.10;
        printf("\nO valor do novo salario e' R$ %.2f.", salario);
    }
    else
    {
        salario += salario*0.05;
        printf("\nO valor do novo salario e' R$ %.2f.", salario);
    }

    return 0;
}