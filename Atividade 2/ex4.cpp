// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main(){
	
	float b;
	float h;
	
	printf("Insira o valor da base: ");
	scanf("%f", &b);
	
	printf("Insira o valor da altura: ");
	scanf("%f", &h);
	
	if (b*h > 100){
		printf("TERRENO GRANDE");
	}
	else{
		printf("TERRENO PEQUENO");
	}
}
