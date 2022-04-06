//MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>


void convert(char array[40]);
void exibir(char array[40]);

int main(){
	
	char array[40];
	
	printf("Insira uma frase de ate 40 caracteres: ");
	fgets(array, 40, stdin);
	
	convert(array);
	exibir(array);
}
void convert(char array[40]){
	
	for(int i=0; i < 40; i++){
		
		if(array[i] == 'a' || array[i] == 'A'){
			array[i] = '4';
		}
		if(array[i] == 'b' || array[i] == 'B'){
			array[i] = '8';
		}
		if(array[i] == 'e' || array[i] == 'E'){
			array[i] = '3';
		}
		if(array[i] == 'l' || array[i] == 'L'){
			array[i] = '1';
		}
		if(array[i] == 'o' || array[i] == 'O'){
			array[i] = '0';
		}
		if(array[i] == 's' || array[i] == 'S'){
			array[i] = '5';
		}
		if(array[i] == 't' || array[i] == 'T'){
			array[i] = '7';
		}
							
						}
					}	

void exibir(char array[40]){
	
	printf("%s", array);

}


