// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	
	int num;
	int cont = 0;
	int mnum;
	
	  while (cont < 10 ){
			printf("\n--- Insira o %d numero: ", cont + 1);
			scanf("%d", &num);
			cont++;
			
			if( num > mnum){
				mnum = num;
			}
		}
		
		printf("\n--- O MAIOR NUMERO E: %d ---\n", mnum);
}
