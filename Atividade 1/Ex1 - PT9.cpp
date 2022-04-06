// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
	float dolar;
	float qtdolares;
	float conversor;
	
	printf("Digite o valor do dolar: ");
	scanf("%f",&dolar);
	
	printf("Quantidade de dolares: ");
	scanf("%f",&qtdolares);
	
	conversor = dolar * qtdolares;
	
	printf("\n");
	
	printf("O valor do dolar em real = %.2f ",conversor);
	printf("R$");
	
}

