#include <stdio.h>

int main() {
    int num, temp;

    printf("Digite o numero: ");
    scanf("%d", &num);
    temp= (num%2)+1;
    printf("Proximo antecessor impar e': %d.\n", num-temp);
    printf("Proximo sucessor impar e': %d.", num+temp);

    return 0;
}