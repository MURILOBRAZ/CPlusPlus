// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main(){
	
	float a,Vo,t;
	float V;
	
	printf("Digite o valor da aceleracao: ");
	scanf("%f",&a);
	
	printf("Digite o valor da velocidade inicial: ");
	scanf("%f",&Vo);
	
	printf("Digite o valor do tempo: ");
	scanf("%f",&t);
	
	V = (Vo + (a * t))*3.6;
	
	printf("A velocidade do automovel :%.2f",V);
	printf("Km/h");
}
