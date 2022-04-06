// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct cadastro{
	
	char Name[30];
	char Console[10];
	char Genre[15];
	int Code;
	float Price;
};

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");

	cadastro store;  
	
	printf("\nInsira o Nome do Jogo: ");
	fgets(store.Name, 30, stdin);
	
	printf("\nInsira o Nome do Console: ");
	fgets(store.Console, 10, stdin);
	
	printf("\nInsira o Gênero do Jogo: ");
	fgets(store.Genre, 15, stdin);
	
	printf("\nInsira o Código de Barras: ");
	scanf("%d", &store.Code);
	
	printf("\nInsira o Preço do Jogo: ");
	scanf("%f", &store.Price);
	
	printf("\n-----------------------------------\n");
	printf("\nNome: %s", store.Name);
	printf("Console: %s", store.Console);
	printf("Gênero: %s ", store.Genre);
	printf("Código: %d ", store.Code);
	printf("\nPreço: %.2f ", store.Price);
	
}
