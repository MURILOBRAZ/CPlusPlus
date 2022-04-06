// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
	int altura;
	int base;
	int area;
	
	printf("coloque a base do triangulo: ");
	scanf("%d",&base);
	printf("coloque a altura do triangulo: ");
	scanf("%d",&altura);
	
	area = base*altura/2;
	
	printf("a area do triangulo e igual a = %d m", area);
}
