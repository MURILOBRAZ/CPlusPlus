// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system ("color 02");
	
	float arit;	
	int num[10];
	int menor;
	int soma = 0;
	int par [10];
	int contpar = 0;
	int i = 0;
	int imenor;
	
	printf("\n----------------------------------------------\n");
	for(i = 0; i < 10; i++){
        printf("--- Insira o %d numero: ",i + 1);
        scanf("%d",&num[i]);
}
    for(i = 0; i < 10; i++){
	if (num[i]%2 == 0){
    		par[contpar] = num[i];
    		contpar++;
	}	
}
	printf("\n----------------------------------------------\n");
		
		menor = num[0];
		
        imenor = 0;
        
	for (i = 0 ; i < 10 ; i++){
        
        if (num[i] < menor ){

            menor = num[i];

            imenor = i;
        }
    }
	for(i = 0; i < contpar; i++){
	}
	printf("Foram inseridos %d numeros pares!\n", i);
	for(i = 0; i < 10; i++){
		
		soma = ( soma + num[i]);
    
		arit = ((soma * 1.0)/10);
}
	printf("\n----------------------------------------------\n");
	printf("A media aritmetica dos valores inseridos e %.1f!\n", arit);
	printf("\n----------------------------------------------\n");
	printf("O menor valor inserido foi %d no indice %d!\n", menor, imenor + 1);
	printf("\n----------------------------------------------\n");
}

