// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main()
{
	float p1;
	float p2;
	float p3;
	float media;
	
	printf("Insira o valor da P1: ");
	scanf("%f", &p1);
	printf("Insira o valor da P2: ");
	scanf("%f", &p2);
	
	media = (p1 + 2*p2)/3;
	
	printf("SUA MEDIA FOI: %.2f\n", media);
	
	if (media >= 5 ){
		printf("Aluno aprovado!");
	}
	else printf("Insira a nota da P3: ");
	scanf("%f", &p3);
	if (p1 > p2){
		media = (p1 + 2*p3)/3;
	}
	else {
		media = (p2 + 2*p3)/3;
	}
	printf("SUA MEDIA FOI: %.2f\n", media);
	
	if (media >= 5 ){
		printf("Aluno APROVADO!");
	}
	else printf("Aluno REPROVADO");
}
