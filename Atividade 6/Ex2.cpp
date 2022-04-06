// MURILO LIMA DOS SANTOS BRAZ RA:202873

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	 
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 char string1 [41];
	 
	 printf("\n--------------------------------------------------\n");
	 printf("Insira o nome desejado(De no máximo 40 caracteres):");
	 fgets(string1, 41, stdin);
	 printf("--------------------------------------------------\n");
	 
	 for(int i = 0; i < strlen(string1); i++){
	 string1[i] = toupper(string1[i]);
	}	 
	printf("\n-------------------------------\n");
	printf(" A frase Inserida foi:");
	printf("\n %s",string1);
	printf("-------------------------------\n");
}
