// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system ("color 02");
	
	int numA[5];
	int numB[5];
	int numC[5];
	int i;
	
	printf("\n----------------------------------------------\n");
	for(i = 0; i < 5; i++){
        printf("--- Insira o %d numero do PRIMEIRO Vetor: ",i + 1);
        scanf("%d",&numA[i]);
	}
	printf("\n----------------------------------------------\n");
	for(i = 0; i < 5; i++){
        printf("--- Insira o %d numero do SEGUNDO Vetor: ",i + 1);
        scanf("%d",&numB[i]);
	}
	printf("\n----------------------------------------------\n");
	
	for(i = 0; i < 5; i++){

            printf("\n - Primeiro VETOR[%d] -",numA[i]);
	}   
	printf("\n----------------------------------------------\n");
	
	for(i = 0; i < 5; i++){
		printf("\n - Segundo VETOR[%d] -",numB[i]);
	}
	printf("\n----------------------------------------------\n");
	for(int i =0; i<5;i++){
        numC[i] = numA[i] + numB[i];
 
    	    
	
		printf("\n - SOMA[%d] + [%d] = [%d] ",numA[i],numB[i], numC[i]);
	}
	printf("\n----------------------------------------------\n");
	for(int i =0; i<5;i++){
        numC[i] = numA[i] + numB[i];
        printf("\n - Terceiro VETOR[%d]", numC[i]);
	}
	printf("\n----------------------------------------------\n");
}
