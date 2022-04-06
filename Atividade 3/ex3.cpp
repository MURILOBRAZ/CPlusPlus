// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	
	int num1;
	int i;
	int calc;
	int o = 0;
	
	
	printf("Insira o numero inteiro: ");
	scanf("%d", &num1);
	
	for( int i = 1; i <= num1; i++){
		
		calc = num1 % i;
		
		if(calc == 0){
			o++;
		}
	}
	if(o == 2){
		printf("\nO numero %d e PRIMO!", num1);
	}
	else{
		printf("\nO numero %d NAO e primo!", num1);
	}
}
