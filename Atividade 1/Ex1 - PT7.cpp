// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
	float diametro;
	float area;
	float raio;
	float pi = 3.14159265359;
	
	printf("inserir valor do diametro: ");
	scanf("%f", &diametro);
	
	raio = diametro/2;
	
	area =(raio*raio)* pi;
	
	printf("A area do circulo e: %.2f m", area);
}
