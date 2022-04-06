// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	 system ("color 02");

    int seq[9] = {8,14,37,55,63,74,82,91};
    int num = 100;
    int helpm = 0;
    int help = 0;

	printf("\n--- VETORES ---");
	
    for (int i=0; i<9; i++){
    	
        printf("\n Posicao [%d] : %d",i, seq[i]);
    }

    while(help != 1){
		printf("\n------------------------------------------");
        printf("\n Insira um valor inteiro entre [0 e 100]: ");
        scanf("%d", &num);
        if(num >= 0 && num <= 100){
            help = 1;
        }
    }

    for(int iC=0; iC < 8; iC++){

        if (num == seq[iC]){
            printf("------------------------------------------");
			printf("\n NUMERO JA EXISTENTE NA SEQUENCIA!!");
			printf("\n------------------------------------------");
            printf("\n Digite outro numero: ");
            scanf("%d", &num);
            iC= 0 - 1;
        }
    }
        
    seq[8] = num;

    for(int iA = 0; iA < 9; iA++){
        for (int iB = iA+1; iB < 9; iB++){

            if (seq[iA] > seq[iB]){

                helpm = seq[iA];
                seq[iA] = seq[iB];
                seq[iB] = helpm;
            }
        }
    }

    printf("\n--- VETORES ---");
	
    for (int i=0; i<9; i++){
        printf("\n Posicao [%d] : %d",i, seq[i]);
    }
}
