#include <stdio.h>

int main()
{
    char str[100], str_[100], i = 0, i_ = 0;
    gets(str);
    do
    {
        if (str[i] != '\0')
            i++;
        else
            break;
    } while (i < 100);

    i--; // ultimo caractere exceto \0

    do
    {
        str_[i_] = str[i];
        i--;
        i_++;
    } while (i >= 0);

    str_[i_] = '\0';
    printf("%s", str_);
    return 0;
}
