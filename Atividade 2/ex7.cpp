// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main(){
	float a;
	float p;
	float imc;
	
	printf("Insira a altura em METROS: ");
	scanf("%f", &a);
	
	printf("Insira o peso em KG: ");
	scanf("%f", &p);
	
	imc = p / (a*a);
	
	if (imc < 20){
		printf("Seu imc esta (%.2f) Voce esta abaixo do peso", imc);
	}
	else{ 
	if (20 <= imc && imc < 25){
		printf("Seu imc esta (%.2f) Voce esta no peso ideal", imc);
	}
	else{
	if(imc >= 25){
	printf("Seu imc esta (%.2f) Voce esta acima do peso", imc);
	} 
		}
	}
	}
