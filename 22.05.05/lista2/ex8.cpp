#include <stdio.h>

int main() {
    int num, cen, dez, uni;

    printf ("Digite 3 digitos: ");
    scanf("%d", num);
    dez = num%100;
    uni = num%10;
    printf("%d", uni);
    printf("%d", dez/10);
    printf("%d", num/100);
    
    return 0;
}