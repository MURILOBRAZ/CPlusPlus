//MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Menu();

int menuopc;

int main(){

    system ("color 02");
    setlocale(LC_ALL,"");
    
    Menu();
    
    switch (menuopc){
		
		case 1:
			printf("\n-- %d - ABRIR --", menuopc);
			break;
		case 2:
			printf("\n-- %d - SALVAR --", menuopc);
			break;
		case 3:
			printf("\n-- %d - EXCLUIR --", menuopc);
			break;
		case 4:
			printf("\n-- %d - EXPORTAR --", menuopc);
			break;
		case 5:
			printf("\n-- %d - EDITAR --", menuopc);
			break;
		default:
			printf("\n---Valor Invalido!!---");
	}
}

int Menu(){
	printf("\n 1-ABRIR \n 2-SALVAR \n 3-EXCLUIR \n 4-EXPORTAR \n 5-EDITAR \n");
	printf("\n--- Digite o NUMERO da opcao desejada: ");
	scanf("%d", &menuopc);
}
