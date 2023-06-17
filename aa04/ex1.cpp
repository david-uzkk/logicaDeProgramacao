#include <stdio.h>

int main(){
    int n, id, peso, m_magro=0, m_gordo=0, id_magro=0, id_gordo=0;

    for ( n = 1; n <= 90; n++ ) {
        printf("Digite a <ID> do boi [%d]: ", n);
        scanf("%d", &id);
        printf("Digite o <PESO> do boi [%d]: ", n);
        scanf("%d", &peso);
        printf("\n");
        if (m_magro == 0)m_magro = peso;

        if(peso < m_magro){
            m_magro=peso;
            id_magro=id;
        }
        if(peso > m_gordo){
            m_gordo=peso;
            id_gordo=id;
        }

    }
    printf("==============================\n");
    printf("Boi mais magro: <ID>    <PESO>\n");
    printf("                 %d       %dKg.\n\n", id_magro, m_magro);
    printf("Boi mais gordo: <ID>    <PESO>\n");
    printf("                 %d       %dKg\n", id_gordo, m_gordo);
    printf("==============================");
    
    return 0;
}