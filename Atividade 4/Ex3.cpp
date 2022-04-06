// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	
	int val1;
	int val2;
	int cont = 0;
	int imp;
	
	printf("\n--- Insira o menor valor: ");
	scanf("%d", &val1);
	
	printf("\n--- Insira o maior valor: ");
	scanf("%d", &val2);
	if(val1 == val2){
		printf("\n--- ERROR --- \n--- Ambos valores sao IGUAIS!! ---");
	}
	else{	
		cont = val1;
	
		while (cont <= val2){
			imp = cont%2;
		if(imp != 0){
			
			printf("\n--- OS NUMEROS IMPARES SAO:%d\n", cont);
		}
		cont++;
		}	
	}		
}

