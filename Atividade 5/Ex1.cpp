// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system ("color 02");
	
	int num[20];
	int i;
	int val = 101;
	
    for(int i = 1; i <= 20; i++){
        
        num[i] = val;
        val++;
        
		}
		printf("\n       -----------\n");
		printf(" OS VALORES ARMAZENADOS SAO:\n");
			
		for(i = 1; i <= 20; i++){
			
			printf("       --- %d ---\n", num[i]);
		}
		printf("       -----------\n");
} 

