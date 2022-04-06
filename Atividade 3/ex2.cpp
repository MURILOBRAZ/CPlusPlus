// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	int popu;
	int anos;
	int popa;
	int i = 1;
	float porcen;
	
	printf("   CALCULADOR DE POPULACAO FUTURA");
	
	printf("\n\n - Insira a populacao atual: ");
	scanf("%d", &popu);
	
	printf("\n - Insira a taxa percentual anual de crescimento: ");
	scanf("%f", &porcen);
	
	printf("\n - Insira a quantidade de anos futuros: ");
	scanf("%d", &anos);
	
	for(int i = 1; i <= anos ; i++){
	
	popa = popu * (porcen+100)/100;
	popu = popa;
	
	printf("\nA populacao no ano %d equivale a: %d \n", i, popu);
	}
}
