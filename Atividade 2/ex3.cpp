// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main(){

	float h1;
	float c1;
	float c2;
	float reth;
	
	printf("Insira o valor da hipotenusa: ");
	scanf("%f", &h1);
	
	printf("Insira o valor de um dos catetos: ");
	scanf("%f", &c1);
	
	printf("Insira o valor do outro cateto: ");
	scanf("%f", &c2);
	
	reth = (c1 * c1) + (c2 * c2);
	
	if (reth == h1*h1){
		printf("ESSES VALORES (%.f , %.f , %.f) PODEM SIM FORMAR UM TRIANGULO RETANGULO", h1, c1, c2);
	}
	else{ printf("ESSES VALORES (%.f , %.f , %.f) NAO PODEM FORMAR UM TRIANGULO RETANGULO", h1, c1, c2);
	}
}
