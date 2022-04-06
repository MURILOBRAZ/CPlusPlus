// MURILO LIMA DOS SANTOS BRAZ RA: 202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Invert(int &X, int &Y, int &Z){
	
	Z = X;
	
	X = Y;
	
}

int main(){
	
	system ("color 02");
	setlocale(LC_ALL,"");
	 
	int X, Y, Z;
	
	printf("Insira o valor de X: ");
	scanf("%d", &X);
	
	printf("Insira o valor de Y: ");
	scanf("%d", &Y);
		
	printf("\n--- O valor de X é %d ---", X);
	printf("\n--- O valor de Y é %d ---", Y);
	
	Invert(X, Y, Z);

	printf("\n-------------------------------");
	printf("\n----- INVERÇÃO DE VALORES -----");
	printf("\n-------------------------------");
	
	printf("\n--- O valor de X é %d ---", X);
	printf("\n--- O valor de Y é %d ---", Z);
}
