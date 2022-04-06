// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
	float R;
	float I;
	float tensao;
	
	printf("Insira o valor da Resistencia: ");
	scanf("%f",&R);
	printf("Insire o valor da Corrente: ");
	scanf("%f",&I);
	
	tensao = R*I;
	
	printf("a tensao do circuito e de %.2f ohms",tensao);
}
