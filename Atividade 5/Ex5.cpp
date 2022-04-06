// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	 system ("color 02");
	
    int num[4][4];
    printf("------------------------------------------\n");
    for(int lin = 0; lin < 4; lin++){
        for(int col = 0; col < 4; col++){
            printf(" POSICAO[%d][%d] = ",lin + 1,col + 1);
            scanf("%d",&num[lin][col]);
        }
    }
    printf("------------------------------------------\n");
    for(int lin = 0; lin < 4; lin++){
        for(int col = 0; col < 4; col++){
            printf(" %d",num[lin][col]);
        }
        printf("\n");
    }
    printf("------------------------------------------\n");
    printf(" Os numeros na diagonal sao: [%d - %d - %d - %d]", num[0][0], num[1][1], num[2][2], num[3][3], num[4][4]);
	printf("\n------------------------------------------\n");
}
