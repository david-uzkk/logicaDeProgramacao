#include <stdio.h>

int main()
{
    char str[200] = "";
    int i, i_, ver = 0;
    float cont = 0, l = 0;

    printf("\n");

    printf("Digite uma string: \n");
    gets(str);

    for (i = 0; i < 201; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            l++;
        }
        else if (str[i] == 'b' || str[i] == 'B')
        {
            l++;
        }
        else if (str[i] == 'c' || str[i] == 'C')
        {
            l++;
        }

        else if (str[i] == 'd' || str[i] == 'D')
        {
            l++;
        }
        else if (str[i] == 'e' || str[i] == 'E')
        {
            l++;
        }
        else if (str[i] == 'f' || str[i] == 'F')
        {
            l++;
        }
        else if (str[i] == 'g' || str[i] == 'G')
        {
            l++;
        }
        else if (str[i] == 'h' || str[i] == 'H')
        {
            l++;
        }
        else if (str[i] == 'i' || str[i] == 'I')
        {
            l++;
        }
        else if (str[i] == 'j' || str[i] == 'J')
        {
            l++;
        }
        else if (str[i] == 'k' || str[i] == 'K')
        {
            l++;
        }
        else if (str[i] == 'l' || str[i] == 'L')
        {
            l++;
        }
        else if (str[i] == 'm' || str[i] == 'M')
        {
            l++;
        }
        else if (str[i] == 'n' || str[i] == 'N')
        {
            l++;
        }
        else if (str[i] == 'o' || str[i] == 'O')
        {
            l++;
        }
        else if (str[i] == 'p' || str[i] == 'P')
        {
            l++;
        }
        else if (str[i] == 'q' || str[i] == 'Q')
        {
            l++;
        }
        else if (str[i] == 'r' || str[i] == 'R')
        {
            l++;
        }
        else if (str[i] == 's' || str[i] == 'S')
        {
            l++;
        }
        else if (str[i] == 't' || str[i] == 'T')
        {
            l++;
        }
        else if (str[i] == 'u' || str[i] == 'U')
        {
            l++;
        }
        else if (str[i] == 'v' || str[i] == 'V')
        {
            l++;
        }
        else if (str[i] == 'w' || str[i] == 'W')
        {
            l++;
        }
        else if (str[i] == 'x' || str[i] == 'X')
        {
            l++;
        }
        else if (str[i] == 'y' || str[i] == 'Y')
        {
            l++;
        }
        else if (str[i] == 'z' || str[i] == 'Z')
        {
            l++;
        }
    }

    if (l != 0)
    {
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'a' || str[i_] == 'A')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra a: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'b' || str[i_] == 'B')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra b: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'c' || str[i_] == 'C')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra c: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'd' || str[i_] == 'D')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra d: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'e' || str[i_] == 'E')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra e: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'f' || str[i_] == 'F')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra f: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'g' || str[i_] == 'G')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra g: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'h' || str[i_] == 'H')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra h: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'i' || str[i_] == 'I')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra i: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'j' || str[i_] == 'J')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra j: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'k' || str[i_] == 'K')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra k: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'l' || str[i_] == 'L')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra l: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'm' || str[i_] == 'M')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra m: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'n' || str[i_] == 'N')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra n: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'o' || str[i_] == 'O')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra o: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'p' || str[i_] == 'P')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra p: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'q' || str[i_] == 'Q')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra q: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'r' || str[i_] == 'R')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra r: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 's' || str[i_] == 'S')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra s: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 't' || str[i_] == 'T')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra t: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'u' || str[i_] == 'U')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra u: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'v' || str[i_] == 'V')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra v: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'w' || str[i_] == 'W')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra w: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'x' || str[i_] == 'X')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra x: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'y' || str[i_] == 'Y')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra y: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
        for (i_ = 0; i_ < 201; i_++)
        {
            if (str[i_] == 'z' || str[i_] == 'Z')
            {
                cont++;
            }
        }
        if (cont != 0)
            printf("Letra z: %.0f [%.2f%%]\n", cont, (cont * 100) / l);
        cont = 0;
    }

    else
        printf("\nNao existem letras nesta string!");

    return 0;
}