#include <stdio.h>

int Resto(int a, int b)
{
    return (a % b);
}
int Trunca(float a)
{
    return a;
}
int Quociente(int a, int b)
{
    return a / b;
}
int main()
{
    int mes, dia, ano, a, s, diaSemana;
    char *semana = NULL, mesr[20];
    printf("DIA: ");
    scanf("%d", &dia);
    printf("MES: ");
    scanf("%s", &mesr);
    printf("ANO: ");
    scanf("%d", &ano);

    if (mesr == "janeiro")
    {
        mes = 11;
    }
    else if (mesr == "fevereiro")
    {
        mes = 12;
    }
    else if (mesr == "marco")
    {
        mes = 1;
    }
    else if (mesr == "abril")
    {
        mes = 2;
    }
    else if (mesr == "maio")
    {
        mes = 3;
    }
    else if (mesr == "junho")
    {
        mes = 4;
    }
    else if (mesr == "julho")
    {
        mes = 5;
    }
    else if (mesr == "agosto")
    {
        mes = 6;
    }
    else if (mesr == "setembro")
    {
        mes = 7;
    }
    else if (mesr == "outubro")
    {
        mes = 8;
    }
    else if (mesr == "novembro")
    {
        mes = 9;
    }
    else
    {
        mes = 10;
    }

    printf("%d", mes);

    a = ano % 100;
    s = ano / 100;
    diaSemana = Resto((Trunca(2.6 * mes - 0.1) + dia + a + Quociente(a, 4) + Quociente(s, 4) - 2 * s), 7);

    switch (diaSemana)
    {
    case 0:
        semana = "Domingo";
        break;

    case 1:
        semana = "Segunda";
        break;

    case 2:
        semana = "Terça";
        break;

    case 3:
        semana = "Quarta";
        break;

    case 4:
        semana = "Quinta";
        break;

    case 5:
        semana = "Sexta";
        break;

    case 6:
        semana = "Sabado";
        break;
    }

    printf("\n\nDIA DA SEMANA: %s", semana);
    
    return (0);
}