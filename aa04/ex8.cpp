#include <stdio.h>

int main()
{
    int n, r, b = 0, p = 1;  

    do
    {
        printf("Digite um numero inteiro de ate 5 digitos: ");
        scanf("%d", &n);
        if (n > 99999 || n < 0)
            printf("Numero invalido!\n");
    } while (n > 99999 || n < 0);

    printf("\nDecimal = %d", n);  
    
    while(n)  
    {  
        r = n % 2;  
        n /= 2;  
        b += r * p;  
        p *= 10;  
    }  
    printf("\nBinario = %d", b);
    return 0;
}