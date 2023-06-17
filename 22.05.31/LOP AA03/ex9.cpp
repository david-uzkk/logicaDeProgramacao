#include <stdio.h>

int main()
{
    float salario, inss, impr, total;

    printf("Digite o valor do salario: R$ ");
    scanf("%f", &salario);

    if (salario >= 0 && salario <= 3218.90){
        if(salario <= 956.67){
            inss = salario*0.08;
        }
        else if(salario >= 956.68 && salario <= 1609.45){
            inss = salario*0.09;
        }
        else{
            inss = salario*0.11;
        }

        if(salario <=  1257.12){
            impr = 0;
        }
        else if(salario >= 1257.13 && salario <= 2512.08){
            impr = salario*0.15;
        }
        else{
            impr = salario*0.275;
        }
        
        salario -= inss + impr;

        printf("\nO valor liquido do se salario e' R$ %.2f", salario);
    }

    else{
        printf("Valor do salario invalido!");
    }

    return 0;
}