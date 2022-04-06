// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
	int valor1;
	int valor2;
	int valor3;
	int valor4;
	int media;
	
	printf("coloque o primeiro valor: ");
	scanf("%d",&valor1);
	printf("coloque o segundo valor: ");
	scanf("%d",&valor2);
	printf("coloque o terceiro valor: ");
	scanf("%d",&valor3);
	printf("coloque o quarto valor: ");
	scanf("%d",&valor4);
	
	media = (valor1 + valor2 + valor3 + valor4)/ 4;
	
	printf("a media aritmetica e igual a = %d", media);
}
