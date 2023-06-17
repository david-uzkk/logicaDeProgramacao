#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int num_pseudo(){
    srand(time(NULL));
    return(rand() % 2);
}

int main()
{
    int comp, ale, escolha;

    printf("[1] Pedra\n[2] Papel\n[3] Tesoura\nSua escolha: ");
    scanf("%d", &escolha);

    ale = num_pseudo();

    if (escolha == 1){
        printf("Voce escolheu pedra!\n");
    }
    else if (escolha == 2){
        printf("\nVoce escolheu papel!\n");
    }
    else {
        printf("\nVoce escolheu tesoura!\n");
    }

    if (ale == 1){
        printf("Eu escolhi pedra!\n\n");
    }
    else if (ale == 2){
        printf("Eu escolhi papel!\n\n");
    }
    else {
        printf("Eu escolhi tesoura!\n\n");
    }

    if (escolha == 1) {
        if (ale == 1){
            printf("Deu Impate!");
        }
        else if (ale == 2){
            printf("Voce perdeu!");
        }
        else {
            printf("Voce ganhou!");
        }
    }
    else if (escolha == 2) {
        if (ale == 1){
            printf("Voce ganhou!");
        }
        else if (ale == 2){
            printf("Deu Impate!");
        }
        else {
            printf("Voce perdeu!");
        }
    }
    else {
        if (ale == 1){
            printf("Voce perdeu!");
        }
        else if (ale == 2){
            printf("Voce ganhou!");
        }
        else {
            printf("Deu Impate!");
        }
    }


    return 0;
}