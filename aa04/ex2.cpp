#include <stdio.h>

int main(){
    char sexo[1] = "", cor_cab[1] = "", cor_olh[1] = "", des[1] = "";
    int i=1, idade, m_idade=0, test;
    float cont1= 0,  cont2= 0;

    printf("\n| MASCULINO = M |\n");
    printf("| FEMININO = F  |\n");
    printf("| ============= |\n");
    printf("| CASTANHO = C  |\n");
    printf("| VERDE = V     |\n");
    printf("| PRETO = P     |\n");
    printf("| LOIRO = L     |\n");
    printf("| AZUL = A      |\n\n");
    do
    {
       test = 0;
       printf("Digite o sexo: ");
       scanf("%s",&sexo);
       if (sexo[0] == 'F') test++;
       printf("Digite a cor dos olhos: ");
       scanf("%s",&cor_olh);
       if (cor_olh[0] == 'V') test++;
       printf("Digite a cor dos cabelos: ");
       scanf("%s",&cor_cab);
       if (cor_cab[0] == 'L') test++;
       printf("Digite a idade: ");
       scanf("%d",&idade);
       if (idade >= 18 && idade <= 35) test++;

       if (idade > m_idade) m_idade=idade;
       if (test == 4) cont2++;

       printf("Deseja digitar mais um habitante? ");
       scanf("%s",&des);
       printf("\n");

       if (des[0] == 'S') i = 1;
       else i = 0;
       cont1++;
    } while (i);

    printf ("A maior idade dos habitantes e' %d anos.\n", m_idade);
    printf ("A porcentagem de habitantes com idade entre 18 e 35, e cabelo loiro e olhos verdes e' de %.0f%%.\n", (cont2*100)/cont1);

    return 0;
}