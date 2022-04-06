// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct cadastro{
	
	char nome[20];
	int RA;
	float P1;
	float P2;
	
};

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");

	cadastro calc;  
 
 	printf("\nInsira seu Nome: ");
	fgets(calc.nome, 20, stdin);
 	
 	printf("\nInsira seu RA: ");
	scanf("%d", &calc.RA);
	fflush(stdin);
	
	printf("\nInsira a nota da P1: ");
	scanf("%f", &calc.P1);
	fflush(stdin);
	
	printf("\nInsira a nota da P2: ");
	scanf("%f", &calc.P2);
	fflush(stdin);
	
	printf("\n--------------------------------\n");
	printf("\nNome: %s", calc.nome);
	printf("RA: %d", calc.RA);
	printf("\nP1: %.2f ", calc.P1);
	printf("\nP2: %.2f ", calc.P2);
	}

