//MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int media(int num1, int num2, int num3);	
	
int main(){
	
	system ("color 02");
	setlocale(LC_ALL,"");
	
	int num1, num2, num3;
	
	printf("\nInsira o primeiro valor: ");
	scanf("%d", &num1);
	
	printf("\nInsira o segundo valor: ");
	scanf("%d", &num2);
	
	printf("\nInsira o terceiro valor: ");
	scanf("%d", &num3);
	
	media(num1, num2, num3);
	
	printf("--------------------------------");
	printf("\nA média aritmética é: %d", media(num1, num2, num3));
	
}
int media(int num1, int num2, int num3){
	
	int calc;
	calc = (num1 * num2 * num3)/3;
	return calc;
}
