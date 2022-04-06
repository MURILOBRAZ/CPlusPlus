// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	
	int somaPAR;
	int somaIMP;
	int tPAR;
	int tIMP;
	int v;
	int arrayLength = 15;
	int num[arrayLength];
	
	somaPAR = 0;
	somaIMP = 0;
	tPAR = 0;
	tIMP = 0;
	
	
	for(int i = 0; i <= arrayLength;i++){
		printf("Insira o numero de sua escolha:");
	    scanf("%d",&num[i]);
		
	}
	
	for(int i = 1; i <= arrayLength; i++)
	{
		printf("\nO valor da variavel %d e: %d",i,num[i]);
	}
	
	for(int i = 0; i <= arrayLength;i++)
	{
	   v = num[i] % 2;
	 if( v == 0)
     {
     	tPAR++;
     	somaPAR += num[i];
	 }
	 else
	 {
	 	tIMP++;
	 	somaIMP += num[i];
	 }
		
	}
	
	printf("\n\nExistem %d numeros pares e a soma dos Pares e: %d",tPAR,somaPAR);
	printf("\n\nExistem %d numeros impares e a soma dos Impares e: %d",tIMP,somaIMP);
	return 0;
}
