// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main(){
	float a;
	float v0;
	float t;
	float V;
	
	printf("Insira a aceleracao em m/s quadrado: ");
	scanf("%f", &a);
	
	printf("Insira a velocidade inicial em m/s: ");
	scanf("%f", &v0);
	
	printf("Insira o tempo de percurso em s: ");
	scanf("%f", &t);
	
	V = v0 + (a*t);
	
	if(V <= 40){
		printf("Veiculo muito Lento (%.f KMh)", V);
	} 
	else{
		if(40 < V && V <= 60){
		printf("Velocidade Permitida (%.f KMh)", V);
		}
		else{
			if(60 < V && V <= 80){
				printf("Velocidade de Cruzeiro (%.f KMh)", V);
			}
			else{
				if(80 < V && V <= 120){
					printf("Veiculo Rapido (%.f KMh)", V);
				}
				else{
					if(V > 120){
						printf("Veiculo muito Rapido (%.f KMh)", V);
					}
				}
			}
		}
		
		
	}
}
