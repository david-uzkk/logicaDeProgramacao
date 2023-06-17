#include <stdio.h>

int main() {
    int vert, hori, total;
    printf("Digite a quantidade de cortes na horizontal: ");
    scanf("%d", &hori);
    printf("Digite a quantidade de cortes na vertical: ");
    scanf("%d", &vert);
    total = (vert+1)*(hori+1); 
    printf("A quantidade total de pedacos e' %d.\n", total);
    printf("A quantidade de pecos para o Zezinho e' %d.\n", total/3);
    printf("A quantidade de pecos para o Luizinho e' %d.\n", total/3);
    printf("A quantidade de pecos para o Huguinho e' %d.\n", total/3);
    printf("E soborou %d.", total%3);

    return 0;
}