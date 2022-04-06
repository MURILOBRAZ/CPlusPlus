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
	 char string2 [40];
	 
	 printf("\n--------------------------------------------------\n");
	 printf(" Insira o 1°Nome desejado: ");
	 fgets(string1, 40, stdin);
	 
	 printf("\n--------------------------------------------------\n");
	 printf(" Insira o 2°Nome desejado: ");
	 fgets(string2, 40, stdin);
	 printf("\n--------------------------------------------------\n");
	 
	 printf(" Os nomes inseridos Foram: %s e %s", string1, string2);
	 
	 for(int i = 0; i < strlen(string1); i++){
	 string1[i] = toupper(string1[i]);
	 }
	 for(int i = 0; i < strlen(string2); i++){
	 string2[i] = toupper(string2[i]);
	 }
	 if(strcmp(string2,string1) == 0)
	 {
	printf("\n--------------------------------------------------\n");
	printf(" Os nomes são idênticos!!");
	 }
	else
	 {
	printf("\n--------------------------------------------------\n");
	printf(" Os nomes são diferentes!!");
	 }
	printf("\n--------------------------------------------------\n");
	 
}
