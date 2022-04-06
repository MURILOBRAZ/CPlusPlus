// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main(){
	float salario;
	float calculo;
	
	printf("Insira seu Salario: R$ ");
	scanf("%f", &salario);
	
	if ( salario < 1000){
		printf("Seu imposto retido e de 5 porcento");
	}
	else{
		if( 3000 > salario ){
			printf("Seu imposto retido e de 10 porcento");
		}
		else{
			if( 5000 > salario){
				printf("Seu imposto retido e de 15 porcento");
			}
			else{ printf("Seu imposto retido e de 20 porcento");
			}
		}
	}
}
