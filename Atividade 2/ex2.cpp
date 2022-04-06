// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main(){
	
	int n1;
	int n2;
	int n3;
	
	 printf(" Insira o primeiro numero: ");
	 scanf("%d", &n1);
	 
	 printf(" Insira o segundo numero: ");
	 scanf("%d", &n2);
	 
	 printf(" Insira o terceiro numero: ");
	 scanf("%d", &n3);
	 
	 if (n1 < n2 && n2 < n3){
	 	printf("o menor numero e: %d\n", n1);
	 	printf("o maior numero e: %d", n3);
	 }
	 else{ 
	 	if(n1 < n3 && n3 < n2){
	 	printf("o menor numero e: %d\n", n1);
	 	printf("o maior numero e: %d", n2);
	 } 
	 	else{
	 		if(n2 < n1 && n1 < n3){
	 	printf("o menor numero e: %d\n", n2);
	 	printf("o maior numero e: %d", n3);
		 }
		 else{
		 	if(n2 < n3 && n3 < n1){
	 	printf("o menor numero e: %d\n", n2);
	 	printf("o maior numero e: %d", n3);
		 }
		 else{
		 if(n3 < n1 && n1 < n2){
	 	printf("o menor numero e: %d\n", n3);
	 	printf("o maior numero e: %d", n2);
		 }
		 else{
		 	if(n3 < n2 && n2 < n1){
	 	printf("o menor numero e: %d\n", n3);
	 	printf("o maior numero e: %d", n1);
		 }
		}
}
}
}
}
}

