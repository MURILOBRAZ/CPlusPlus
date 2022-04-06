//MURILO LIMA DOS SANTOS BRAZ  RA: 202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	
	FILE *arqP;
	char nome[41];
	
	arqP = fopen("NomesEX1.txt", "w+");
	
	printf("\n--- LISTA DE NOMES ---\n");
	printf("Insira um nome com até 40 caracteres!!");
	for (int i = 0; i < 10; i++){
		printf("\n%d° Nome - ",i+1);
		gets(nome);
		fprintf(arqP, " %d° Nome: %s\n",i+1, nome);
		
	}
	
}
