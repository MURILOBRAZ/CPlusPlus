//MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>


char convert(char array1[40]);
int exibir(char array2[40]);

int main(){
	
	char array[40];
//	char convert1[40];
	
	printf("Insira uma frase de ate 40 caracteres: ");
	fgets(array, 40, stdin);
	
	convert(array);
	exibir(array);
}
char convert(char array1[40]){
	
	char convert1[40];
	for(int i=0; i < 40; i++){
		
		if(array1[i] == 'a' && 'A'){
			convert1[i] = '4';
		}else{if(array1[i] == 'b' && 'B'){
			convert1[i] = '8';
		}else{if(array1[i] == 'e' && 'E'){
			convert1[i] = '3';
		}else{if(array1[i] == 'l' && 'L'){
			convert1[i] = '1';
		}else{if(array1[i] == 'o' && 'O'){
			convert1[i] = '0';
		}else{if(array1[i] == 's' && 'S'){
			convert1[i] = '5';
		}else{if(array1[i] == 't' && 'T'){
			convert1[i] = '7';
		}}
				}
			}	
		}
	}
}
		
		convert1[i] = array1[i];
}
	array1[40] = convert1[40];
	return array1[40];
}

int exibir(char array2[40]){
	
	printf("%s", array2);

}


