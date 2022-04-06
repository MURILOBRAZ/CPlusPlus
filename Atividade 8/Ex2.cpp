// MURILO LIMA DOS SANTOS BRAZ RA: 202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void crescente(int &a, int &b, int &c, int &A, int &B, int &C){
	
	if(a>b && a<c){
		B = a;
		C = c;
		A = b;
	}else{ 
	if(a>c && a<b){
		B = a;
		C = b;
		A = c;
	}else{
	if(b>a && b<c){
		B = b;
		C = c;
		A = a;
	}else{
	if(b>c && b<a){
		B = b;
		C = a;
		A = c;
	}else{
	if(c>b && c<a){
		B = c;
		C = a;
		A = b;
	}else{
	if(c>a && c<b){
		B = c;
		C = b;
		A = a;
	}
					}
				}
			}
		}
	}
}

int main(){
	
	system ("color 02");
	setlocale(LC_ALL,"");
	
	int A, B, C, a, b, c;
	
	printf("Insira o 1°Valor: ");
	scanf("%d", &a);
	
	printf("Insira o 2°Valor: ");
	scanf("%d", &b);
	
	printf("Insira o 3°Valor: ");
	scanf("%d", &c);
	
	crescente(a,b,c,A,B,C);
	
	printf("---------------------------------");
	printf("\n--- O Valor da variável A é %d ---", A);
	printf("\n--- O Valor da variável B é %d ---", B);
	printf("\n--- O Valor da variável C é %d ---", C);
	printf("\n---------------------------------");
	
}
