#include <stdio.h>

int main()
{
    char comodo[10] = "";
    int  i=1;
    float  lado1, lado2, escolha, potencia, lamp, lampt= 0, potenciat= 0;
    do
    {
        printf("Digite o comodo: ");
        scanf("%s", &comodo);
        printf("\nQual foi o comodo escolhido? \n");
        printf("[1] Quarto / Sala de TV\n");
        printf("[2] Sala / Cozinha / Varanda\n");
        printf("[3] Escritorio / Banheiro\n");
        scanf("%f", &escolha);
        printf("\nDigite do primeiro lado do comodo: ");
        scanf("%f", &lado1);
        printf("Digite do segundo lado do comodo: ");
        scanf("%f", &lado2);
        printf("Gostaria de digitar mais comodos?\n[1] Sim [0] Nao: ");
        scanf("%d",&i);
        if(escolha == 1) potencia = 15;
        if(escolha == 2) potencia = 18;
        if(escolha == 3) potencia = 20;
        lamp = (lado1*lado2)/potencia;
        lampt += lamp;
        potenciat += potencia;
        printf("\nComodo: %s.", comodo);
        printf("\nArea do comodo: %.0f m2.", lado1*lado2);
        printf("\nA potencia: %.0f.", potencia);
        printf("\nO numero de lampadas: %.0f.\n\n", lamp);
    } while (i);

    printf("Total de lampadas na residencia: %.0f.\n", lampt);
    printf("Total de potencia na residencia: %.0f.", potenciat);

    return 0;
}