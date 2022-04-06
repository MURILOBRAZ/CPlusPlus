// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	float val;
	
	printf("Preco do pao:R$ ");
	scanf("%f", &val);
	printf("\nPanificadora Pao de Ontem - Tabela de Precos\n");
	for (float pao = 1; pao <= 100; pao++){
		printf("\n   %.f paes * R$%.2f = R$%.2f", pao, val, pao*val );
	}
}
