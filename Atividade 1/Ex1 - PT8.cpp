// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
	float raio;
	float altura;
	float pi = 3.14;
	float volume;
	
	printf("Insira o valor da base: ");
	scanf("%f", &raio);
	printf("Insira o valor da altura: ");
	scanf("%f", &altura);
	
	volume = (((raio*raio*raio)*3.14)*altura)/3;
	
	printf("O volume do cone e: %.2f cm³", volume);
}
