#include <stdio.h>

int main() {
    char letra[10];
    printf("Digite uma letra: ");
    scanf("%s", &letra);
    letra[0]-= 32;
    printf ("%s", letra);
    
    return 0;
}