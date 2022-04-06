// MURILO LIMA DOS SANTOS BRAZ RA:202873

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	 
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 char string1[41];
	 char vogais;
	 char quantidade;
	 char espaco;
	 
	 printf("\n--------------------------------------------------\n");
	 printf("Insira o nome desejado(De no máximo 40 caracteres):");
	 fgets(string1, 41, stdin);
	 printf("--------------------------------------------------\n");
	 
	 //Caracteres presentes na frase
	  for (int i = 0; i < strlen(string1); i++){
	
	 //vogais
	 switch (string1[i]){
	 	case 'a':
	 		vogais++;
	 		break;
	 	case 'e':
	 		vogais++;
	 		break;
	 	case 'i':
	 		vogais++;
	 		break;
	 	case 'o':
	 		vogais++;
	 		break;
	 	case 'u':
	 		vogais++;
	 		break;
	 	case 'A':
	 		vogais++;
	 		break;
	 	case 'E':
	 		vogais++;
	 	case 'I':
	 		vogais++;
	 		break;
	 	case 'O':
	 		vogais++;
	 		break;
	 	case 'U':
	 		vogais++;
	 		break;
		 }	 
	 }
	for (int i = 0; i < strlen(string1); i++){
	 
	 quantidade = i;
	 
	if (isspace(string1[i]) == 8){
	 	espaco ++;}
	}
	
	espaco = espaco - 1;
	 
	quantidade = quantidade - espaco;
	
	printf("\n--------------------------------------------------\n");
	printf("\n O total de caracteres presente no nome é: %d", quantidade);
	 
	printf("\n A quantidade de vogais presentes é: %d", vogais);
	printf("\n A quantidade de Espaços é: %d", espaco);
	printf("\n--------------------------------------------------\n");
	 


}

