// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Consumo{
	
	char NAME[20];
    float POT; 
	float HOUR;
	float DAYS;
	float CREAL;
};

int main(){
	
	system ("color 02");
	 setlocale(LC_ALL,"");
	
	Consumo Aparelhos[5];
	float TOTAL;
	
	for( int i = 0; i < 5; i++){
		
		printf("\n-----------------------------------\n");
		printf("Insira o nome do %d° Eltrodoméstico: ", i+1);
		fgets(Aparelhos[i].NAME, 20, stdin);
		fflush(stdin);
		
		printf("Insira a Potência(Em KW): ");
		scanf("%f", &Aparelhos[i].POT);
		fflush(stdin);
		
		printf("Insira as Horas ativas(Em horas): ");
		scanf("%f", &Aparelhos[i].HOUR);
		fflush(stdin);
		
		printf("Insira a quantidade de dias com o aparelho ligado: ");
		scanf("%f", &Aparelhos[i].DAYS);
		fflush(stdin);
		
		Aparelhos[i].CREAL = Aparelhos[i].POT*Aparelhos[i].HOUR*Aparelhos[i].DAYS / 1000;
		TOTAL = Aparelhos[i].CREAL + Aparelhos[i].CREAL + Aparelhos[i].CREAL + Aparelhos[i].CREAL + Aparelhos[i].CREAL;
	}
	printf("\n-----------------------------------\n");
	for(int i = 0; i<5; i++){
		printf("O consumo do %d°Aparelho é %.2f\n", i+1, Aparelhos[i].CREAL);
		printf("O consumo total é %.2f", TOTAL);
	}
}
