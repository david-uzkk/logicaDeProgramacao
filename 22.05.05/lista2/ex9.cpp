#include <stdio.h>

int main() {
    int num, mil, cen, dez, uni;

    printf ("Digite 4 digitos: ");
    scanf("%d", &num);
    mil = num%10000;
    cen = num%1000;
    dez = num%100;
    uni = num%10;
    printf("%d\n", (mil-cen)/1000);
    printf("%d\n", (cen-dez)/100);
    printf("%d\n", (dez-uni)/10);
    printf("%d\n", uni);

    return 0;
}