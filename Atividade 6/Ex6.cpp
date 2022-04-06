// MURILO LIMA DOS SANTOS BRAZ RA:202873

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
	system ("color 02");
	setlocale(LC_ALL,"");
	 
	char string1[40];
	char vogal[40];
	char consoante[40];

	int iVogal = 0;
	int iConsoante = 0;
 	int auxiliar;

    printf("\n--------------------------------------------------\n");
	printf("Insira o nome desejado(De no máximo 40 caracteres):");
	fgets(string1, 40, stdin);
	printf("--------------------------------------------------\n");
	 
    
	if (string1[39] != '\0'){
		
		auxiliar = strlen(string1);
		string1[auxiliar-1] = '\0'; 
		
	}
	
	auxiliar = strlen(string1);
	
    for(int i = 0; i < auxiliar ; i++){

        switch (string1[i]){
        	
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
		
			vogal[iVogal] = string1[i];
			iVogal++;
			break;
		
        default:
		
			if( isspace( string1[i] ) != 8){
			
				consoante[iConsoante] = string1[i];
				iConsoante++;
				
			}
		
        }
        
    }
    
    vogal[iVogal] = '\0';
    consoante[iConsoante] = '\0';

	printf(" As Vogais são: %s\n", vogal);
	printf(" Consoantes são: %s\n", consoante);

	strcat(vogal,consoante);

    printf("\n As vogais e consoantes são respectivamente: %s", vogal);
    
    printf("\n--------------------------------------------------\n");
}
