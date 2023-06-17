#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sort()
 {
 srand(time(NULL));
 return (rand() % 100);
 }


int main()
{
    int n, t, c;

    do {
        printf("Digite um numero [0-99]: ");
        scanf("%d", &n);   
        if(n < 0 || n > 99) printf  ("\nNumero invalido!!!\n");
    }while (n < 0 || n > 99);

    while (1) {
        if (t != n){
            t = sort();
            c++;
        } 
        else break;
    }

    printf("\nForam necessarias %d tentativas.", c);
    return 0;
}