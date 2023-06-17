#include <stdio.h>
int main()
	{
	int nota_p1[40], nota_p2[40], nota_pt[40], nota_aa1[40], nota_aa2[40], nota_aa3[40], nota_aa4[40], nota_aa[40], nf[40], nf_maior[40], nf_menor[40];
	int i=-1, cont=0, ver, media, mediar;
	char aluno[40] [40], *aluno_maior = "", *aluno_menor = "";
	nf_menor[0] = 0;
	nf_menor[0] = 100;
	
	do {
		i++;
		cont++;
		printf("Digite o nome do aluno: ");
		scanf("%s", &aluno[i]);
		printf("Digite a p1: ");
		scanf("%d", &nota_p1[i]);
		printf("Digite a p2: ");
		scanf("%d", &nota_p2[i]);
		printf("Digite a aa1: ");
		scanf("%d", &nota_aa1[i]);
		printf("Digite a aa2: ");
		scanf("%d", &nota_aa2[i]);
		printf("Digite a aa3: ");
		scanf("%d", &nota_aa3[i]);
		printf("Digite a aa4: ");
		scanf("%d", &nota_aa4[i]);
		printf("\nDeseja digitar mais um aluno? Sim[1] Nao[0]\n");
		scanf("%d", &ver);
		if (ver == 0)i=40;
		printf("\n\n");
		
	} while(i < 40);
	
	for (i=0; i < 40; i++){
		nota_pt[i] = (nota_p1[i]*0.4)+(nota_p2[i]*0.6);
	}
	for (i=0; i < 40; i++){
		nota_aa[i] = (nota_aa1[i] + nota_aa2[i] + nota_aa3[i] + nota_aa4[i])/4;
	}
	for (i=0; i < 40; i++){
		if(nf[i] > nf_maior[0]) {
			nf_maior[0] = nf[i];
			aluno_maior = aluno[i];
		}
		if(nf[i] < nf_menor[0]) {
			nf_menor[0] = nf[i];
			aluno_menor = aluno[i];
		}
	}
	for (i=0; i < 40; i++) {
		media += nf[i];
	}
	
	mediar = media / cont;
	
	printf("Maior nota\n");
	printf("%s - %d", aluno_maior, nf_maior);
	printf("\nMenor nota\n");
	printf("%s - %d", aluno_menor, nf_menor);
	printf("\nMedia\n");
	printf("%d", mediar);
			
	
	return 0;
	}

