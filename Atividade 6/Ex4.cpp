// MURILO LIMA DOS SANTOS BRAZ RA:202873

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	 
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 char string1 [40];
	 char stringInvertido [40];
	 int tamanho;
	 int i;
	 int iInvertido;
	 
	 printf("\n--------------------------------------------------\n");
	 printf(" Insira a frase desejada: ");
	 fgets(string1, 40, stdin);
	 printf("\n--------------------------------------------------\n");
	 
	 tamanho = strlen(string1);
	 
	 iInvertido = tamanho;
	 
	 for(i = 0; i < tamanho; i++){
	 stringInvertido[iInvertido] = string1[i];
	 
	 iInvertido--;
	}
	 printf(" A frase Invertida fica:  %s ", stringInvertido);
	 printf("\n--------------------------------------------------\n");
}
