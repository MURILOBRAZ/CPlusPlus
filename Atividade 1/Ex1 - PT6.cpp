// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
	float tempcelsius;
	float tempfahrenheit;
	
	printf("insira a temperatura em graus celsius: ");
	scanf("%f", &tempcelsius);
	
	tempfahrenheit = tempcelsius*(9.0/5.0)+32.0;
	
	printf("a temperatura em fahrenheit e: %.2f F", tempfahrenheit);
}
