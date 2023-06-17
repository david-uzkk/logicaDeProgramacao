#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>
#include <conio.h>

int num_pseudo(){
    srand(time(NULL));
    return(rand() % 6);
}

int main(){
    int num;

    printf("Vamos jogar par ou impar.\n");
    printf("Escolha [p] para 'par' e [i] para 'impar': ");
    char escolha = getch();

    if ( escolha == 'p') {
        printf("PAR.");
        printf("\nVoce e' PAR e eu sou IMPAR.");
    }
    else {
        printf("IMPAR."); 
        printf("\nVoce e' IMPAR e eu sou PAR.");
    }

    printf("\n\nVamos escolher um numero ao mesmo tempo.");
    printf("\nDigite o numero[0-5]: ");
    scanf("%d", &num);
    int ale = num_pseudo();
    printf("Eu escolhi %d.", ale);
    int total = num+ale;
    printf("\n\n%d mais %d e' %d\n", num, ale, total);
    if (total%2 == 0) {
        printf("\n%d e' PAR.", total);
        if(escolha == 'p') {
            printf("\nVoce ganhou...");
        }
        else {
            printf("\nVoce perdeu...");
        }
    }
    else {
        printf("\n%d e' IMPAR.", total);
        if(escolha == 'i') {
            printf("\nVoce ganhou...");
        }
        else {
            printf("\nVoce perdeu...");
        }
    }

return 0;
}