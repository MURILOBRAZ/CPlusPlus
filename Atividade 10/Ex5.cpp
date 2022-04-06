// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct cadastro{
	
	char Name[30];
	char Console[];
	char opM[10];
	char Genre[15];
	int Code;
	float Price;
	
	
	void insert(){
  
	int i = 31; 
	int ic = 16;
	
	do{
	printf("\n-----------------------------------\n");
	printf("Insira o Nome do Jogo: ");
	gets(Name);
	}while( i <= strlen(Name));
	fflush(stdin);
	
	do{
	printf("\n-----------------------------------\n");
	printf("Insira o Gênero do Jogo: ");
	fgets(Genre, 15, stdin);
	}while(ic <= strlen(Genre));
	fflush(stdin);
	
	printf("\n-----------------------------------\n");
	
	printf("Insira o Código de Barras: ");
	scanf("%d", &Code);
	fflush(stdin);
	
	printf("\n-----------------------------------\n");
	
	printf("Insira o Preço do Jogo: ");
	scanf("%f", &Price);
	fflush(stdin);
	
	}
	
	void save(){
		
	FILE *pont;
	pont = fopen("Ex5.txt", "w");
	
	fprintf(pont, "\nNOME: %s\tCONSOLE: %s\t GENERO: %s\t CODIGO: %d\t PRECO: %.2f", Name, Genre, opM[10], Code, Price);
	
	fclose(pont);
	}
	
	void Cons(){
		
	char opcao1[10] = "PS4";
	char opcao2[10] = "XBOX ONE";
	char opcao3[10] = "PS3";
	char opcao4[10] = "XBOX 360";
	char opcao5[10] = "WII";
//	char opM[10];
	int cons;
	
	do{
	printf("----------------\n");
	printf("Os consoles são: \n 1 - PS4 \n 2 - XBOX ONE \n 3 - PS3 \n 4 - XBOX360 \n 5 - Wii");
	printf("\n----------------");
	printf("\nInsira o número do console: ");
	scanf("%d",&cons);
	switch(cons)
	{
		case 1: 
			printf("PS4\n");
			opM[10] = opcao1[10];
			system("pause");
			system("cls");
			break;
		case 2: 
			printf("XBOX ONE\n");
			opM[10] = opcao2[10];
			system("pause");
			system("cls");
			break;
		case 3: 
			printf("PS3\n");
			opM[10] = opcao3[10];
			system("pause");
			system("cls");
			break;
		case 4: 
			printf("XBOX 360\n");
			opM[10] = opcao4[10];
			system("pause");
			system("cls");
			break;
		case 5: 
			printf("WII\n");
			opM[10] = opcao5[10];
			system("pause");
			system("cls");
			break;
		default: 
			printf("Opção Invalida\n");
			system("pause");
			system("cls");
			break;
		}
	}while(cons > 5);
	
	printf("%s\t%s\t%c\t%d\t%.2f\t", Name, Genre, opM[10], Code, Price);
}
};

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	
	cadastro test;
	
	test.insert();
	test.Cons();
	test.save();
	
	printf("\n-----------------------------------\n");

}
