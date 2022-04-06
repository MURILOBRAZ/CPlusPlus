//MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void fatorial(int valor, int i);
	
int main(){
	
	system ("color 02");
	setlocale(LC_ALL,"");
	
	int num1;
	
	printf("--------------------------------");
	
	printf("\n-- Insira o valor desejado: ");
	scanf("%d", &num1);
	
	printf("--------------------------------\n");
	
	fatorial( num1, num1);
	
}
void fatorial(int valor, int i){

	i--;
	
	for(i; i >= 1; i--){
		
		valor = valor*i;
		
		printf("O fatorial de %d é: %d\n", i, valor);
		
}
}
