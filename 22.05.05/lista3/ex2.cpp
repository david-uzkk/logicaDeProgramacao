#include <stdio.h>
#include <conio.h>

int main()
 {
    char pass[5];
    printf ("Entre com a senha: ");
    pass[0] = getch();
    printf("*");
    pass[1] = getch();
    printf("*");
    pass[2] = getch();
    printf("*");
    pass[3] = getch();
    printf("*");


    printf ("\n\nA senha que voce digitou foi: %s", pass);
    return 0;
 }