// MURILO LIMA DOS SANTOS BRAZ RA:202873

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 int menu;
	 
	 int comprimentoP, larguraP, alturaP;
	 
	 int raioC, alturaC;
	 
	 int raioE;
	 
	 float volumeP, volumeC, volumeE, volumeTOTAL, MvolumeTOTAL;
	 
	while(menu != 999 ){
	 
	printf("\n 1-Paralelepiepdo \n 2-Cilindro \n 3-Esfera \n 4-Finalizar \n");
	printf("\n--- Digite o NUMERO da opcao desejada: ");
	scanf("%d", &menu);

	system("cls");
	
	switch (menu){
		
		case 1:
			printf("\n-- Paralelepípedo --");
			printf("\n----------------------\n");
			printf("Insira o valor do Comprimento: ");
			scanf("%d", &comprimentoP);

			fflush(stdin);
	
			printf("Insira o valor da Largura: ");
			scanf("%d", &larguraP);
	
			fflush(stdin);
	
			printf("Insira o valor da Altura: ");
			scanf("%d", &alturaP);
			
			fflush(stdin);
			
			volumeP = comprimentoP * larguraP * alturaP;
			
			printf("\n--- O volume do Paralelepípedo é: %.2f ---\n", volumeP);
			
			system("pause");
			
			break;	
		case 2:
			printf("\n-- Cilindro --");
			printf("\n----------------------\n");
			printf("Insira o valor do Raio: ");
			scanf("%d", &raioC);
	
			fflush(stdin);
	
			printf("Insira o valor da Altura: ");
			scanf("%d", &alturaC);
			
			fflush(stdin);
			
			volumeC = 3.14 * (raioC*raioC) * alturaC;
			
			printf("\n--- O volume do Cilindro é: %.2f ---\n", volumeC);
			
			system("pause");
			
			break;
		case 3:
			printf("\n-- Esfera --");
			printf("\n----------------------\n");
			printf("Insira o valor do Raio: ");
			scanf("%d", &raioE);
			
			fflush(stdin);
			
			volumeE = 4 * 3.14 * (raioE*raioE*raioE);
			
			printf("\n--- O volume da Esfera é: %.2f ---\n", volumeE);
			
			system("pause");
			
			break;
		case 4:
			printf("\n-- Finalizar --");
			
			volumeTOTAL = volumeP + volumeE + volumeC;
		
			MvolumeTOTAL = (volumeP + volumeE + volumeC) / 4;
		
			printf("\n--- A soma dos volumes é: %.2f ---\n", volumeTOTAL);
		
			printf("\n--- A média dos volumes é: %.2f ---\n", MvolumeTOTAL);
			
			system("pause");
			
			printf("\n--- Programa Encerrado!! ---");
			return 0;
			
			break;
		default:
			printf("\n---Valor Invalido!!---\n");
			
			system("pause");
			
		}
	
	system("cls");
	
	}
}

	 

