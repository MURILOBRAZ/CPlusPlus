// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	
	int x;
	int y;
	int cont = 1;
	int pot;
	
	printf("\n--- Insira o Valor de X: ");
	scanf("%d", &x);
	
	printf("\n--- Insira o Valor de Y: ");
	scanf("%d", &y);
	
	while (cont <= y){
	if(cont == 0 ){
		pot = x*x;
	}
	else{
		pot = pot*x;
	}
	
	cont++;
}
	printf("\n--- (x)%d elevado a (y)%d e igual a : %d ---", x, y, pot);
}
