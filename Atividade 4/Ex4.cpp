// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	
	int opc;
	printf("\n 1-ABRIR \n 2-SALVAR \n 3-EXCLUIR \n 4-EXPORTAR \n");
	printf("\n--- Digite o NUMERO da opcao desejada: ");
	scanf("%d", &opc);
	
	switch (opc){
		
		case 1:
			printf("\n-- ABRIR --");
			break;
		case 2:
			printf("\n-- SALVAR --");
			break;
		case 3:
			printf("\n-- EXCLUIR --");
			break;
		case 4:
			printf("\n-- EXPORTAR --");
			break;
		default:
			printf("\n---Valor Invalido!!---");
	}
}
