#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

struct cadastro{
	
	char Name[30];
	char Console[10];
	char Genre[15];
	int Code;
	float Price;
};

int Cons(int cons1)
{
	printf("----------------\n");
	printf("Os consoles são: \n 1 - PS4 \n 2 - XBOX ONE \n 3 - PS3 \n 4 - XBOX360 \n 5 - Wii");
	printf("\n----------------");
	printf("\nInsira o número do console: ");
	scanf("%d",&cons1);
	
	switch(cons1)
	{
		case 1: 
			printf("PS4\n",cons1);
			break;
		case 2: 
			printf("XBOX ONE\n",cons1);
			break;
		case 3: 
			printf("PS3\n",cons1);
			break;
		case 4: 
			printf("XBOX 360\n",cons1);
			break;
		case 5: 
			printf("WII\n",cons1);
			break;
		default: 
			printf("Opção Invalida\n");
			break;
	}

}

int insert(int &Name, int &Console, int &Genre, int &Code, int &Price){

	cadastro store;  
	int cons1;
	int i = 31; 
	int ib = 11; 
	int ic = 16;
	
	do{
	printf("\nInsira o Nome do Jogo: ");
	gets(store.Name);
	}while( i <= strlen(store.Name));
	fflush(stdin);
	
	Cons(cons1);
	fflush(stdin);
	
	do{
	printf("\nInsira o Gênero do Jogo: ");
	fgets(store.Genre, 15, stdin);
	}while(ic <= strlen(store.Genre));
	fflush(stdin);
	
	printf("\nInsira o Código de Barras: ");
	scanf("%d", &store.Code);
	
	printf("\nInsira o Preço do Jogo: ");
	scanf("%f", &store.Price);
}

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");

	int Name, Console, Genre, Code, Price;
	insert(Name, Console, Genre, Code, Price);
	
	printf("%d", Name, Console, Genre, Code, Price);
	printf("%s\t%s\t%s\t%d\t%.2f\t", Name, Console, Genre, Code, Price);
	
	printf("\n-----------------------------------\n");
	/*printf("\nNome: %s", store.Name);
	printf("Console: %s", store.Console);
	printf("Gênero: %s ", store.Genre);
	printf("Código: %d ", store.Code);
	printf("\nPreço: %.2f ", store.Price);
	*/
}
