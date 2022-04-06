// MURILO LIMA DOS SANTOS BRAZ RA:202873

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main(){
	 
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 char stringX [30];
	 char stringY [30];
	 char stringZ [30];
	 int contagem = 0;
	 int I;
	 int zero;
	 
	 printf("\n--------------------------------------------------\n");
	 printf(" Insira o StringX: ");
	 fgets(stringX, 30, stdin);
	 printf("\n--------------------------------------------------\n");
	 
	 printf(" Insira o StringY: ");
	 fgets(stringY, 30, stdin);
	 printf("\n--------------------------------------------------\n");
	 
	 for(int i = 0; i < strlen(stringX); i++){
	 stringX[i] = toupper(stringX[i]);
	 }
	 for(int i = 0; i < strlen(stringY); i++){
	 stringY[i] = toupper(stringY[i]);
	 }
	 
	for(I = 0; I < strlen(stringX); I++){
	 zero = 0;
	 
	for( int i = 0; i < strlen(stringY); i++){
	 if(stringX[I] == stringY[i]){
	 	zero = 1;
	 	break;
	 	
			}
		}
		if( ! zero){
			stringZ[contagem] = stringX[I];
			contagem++;
		}	 
	}
	stringZ[contagem] = '\0';
	
	printf("A string Z fica %s", stringZ);
}
