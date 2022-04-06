// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	
	float compra;
	float dolar;
	int cartao;
	float cont;
	float point;
	
	printf("\n 1-BRONZE\n 2-PRATA\n 3-OURO\n 4-DIAMANTE\n");
	printf("\n--- DIGITE O NUMERO DA OPCAO DESEJADA: ");
	scanf("%d", &cartao);
	
	printf("\n--- Insira o valor da compra: ");
	scanf("%f", &compra);
	
	printf("\n--- Insira a cotacao do Dolar: ");
	scanf("%f", &dolar);
	
	cont = compra / dolar;
	
	switch(cartao){	 
		 case 1:
		 	point = 1.0;
		 	point = cont*point;
		 	printf("\n--- Cartao Bronze ---");
		 	printf("\n--- Valor da Compra:R$ %.2f \n--- Pontuacao: %.2f", compra, point);
		 	break;
		case 2:
			point = 1.2;
			point = cont*point;
		 	printf("\n--- Cartao Prata ---");
		 	printf("\n--- Valor da Compra:R$ %.2f \n--- Pontuacao: %.2f", compra, point);
		 	break;
		case 3:
			point = 1.5;
			point = cont*point;
		 	printf("\n--- Cartao Ouro ---");
		 	printf("\n--- Valor da Compra:R$ %.2f \n--- Pontuacao: %.2f", compra, point);
		 	break;
		case 4:
			point = 2.0;
			point = cont*point;
		 	printf("\n--- Cartao Diamante ---");
		 	printf("\n--- Valor da Compra:R$ %.2f \n--- Pontuacao: %.2f", compra, point);
		 	break;
	}
}
