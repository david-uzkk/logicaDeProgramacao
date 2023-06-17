#include <stdio.h>

int main()
{
    char turma [10] = "";
    int matricula, nf, d1=1, d2=1, aluno_apro=0, aluno_apro_total=0, notas=0, notas_total=0, alunos=0, alunos_total= 0,  m_nota=0, m_nota_t= 0;
    
    do
    {
        printf("Digite a turma: ");
        scanf("%s", &turma);
        notas = 0;
        m_nota = 0;
        aluno_apro = 0;
        do
        {
            printf("Digite o numero de matricula: ");
            scanf("%d", &matricula);
            printf("Digite a nota final: ");
            scanf("%d", &nf);
            notas += nf;
            if(nf > m_nota) m_nota = nf;
            if (nf >= 60) aluno_apro++;
            printf("\nDeseja Digitar mais um Aluno?\n[1]Sim [0]Nao\n");
            scanf("%d", &d2);
            printf("\n");
            alunos++;
        } while (d2);
        if(m_nota > m_nota_t) m_nota_t = m_nota;
        aluno_apro_total += aluno_apro;
        notas_total += notas;
        alunos_total += alunos;
        printf("\nTurma  |  Aprovados  |  Medias  | Melhor nota\n");
        printf(" %s     |  %d          |  %d      |  %d \n", turma, aluno_apro, notas/alunos, m_nota);
        printf("\nDeseja digitar mais uma turma?\n[1]Sim [0]Nao\n");
        scanf("%d", &d1);
        printf("\n=============================================\n\n");
    } while (d1);

    printf("\nTurmas  |  Aprovados  |  Medias  | Melhor nota\n");
    printf("        |  %d          |  %d      |  %d \n", aluno_apro_total, notas_total/alunos_total, m_nota_t);
    
    return 0;
}