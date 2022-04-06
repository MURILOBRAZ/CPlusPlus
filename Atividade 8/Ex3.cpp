// MURILO LIMA DOS SANTOS BRAZ RA: 202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int colocar(int pos, int *vet);

int main(){
	
	system ("color 02");
	setlocale(LC_ALL,"");
	
    int array[5];
    int *loc;
    loc = &array[0];

    colocar(5,array);

    printf("---------------------------------\n");
    printf("Os numeros após a função ficaram: \n");
	printf("---------------------------------\n");	
    for(int i = 0; i < 5; i++)
    {
        printf("O %d° numero  é: %d\n",i+1,array[i]);
    }
    printf("---------------------------------\n");
}

int colocar(int pos, int *vet)
{
	printf("---------------------------------\n");
    for(int i = 0; i < pos; i++)
    {
        printf("Insira 5 numeros inteiros: ");
        scanf("%d",&vet[i]);
    }
}
