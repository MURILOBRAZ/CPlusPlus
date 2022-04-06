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
	char bug[5] = "ZZZZ";
	
	
	void insert(){
  
	int i = 31; 
	int ic = 16;
	
	do{
	printf("\n-----------------------------------\n");
	printf("Insira o Nome do Jogo: ");
	gets(Name);
	}while( i <= strlen(Name));
	fflush(stdin);
	if (strcmp(Name, bug) == 0){
		exit(EXIT_SUCCESS);
	}
	
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
	
	void Cons(){

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
			strcat(opM, "PS4");
			system("pause");
			system("cls");
			break;
		case 2: 
			printf("XBOX ONE\n");
			strcat(opM, "XBOX ONE");
			system("pause");
			system("cls");
			break;
		case 3: 
			printf("PS3\n");
			strcat(opM, "PS3");
			system("pause");
			system("cls");
			break;
		case 4: 
			printf("XBOX 360\n");
			strcat(opM, "XBOX 360");
			system("pause");
			system("cls");
			break;
		case 5: 
			printf("WII\n");
			strcat(opM, "WII");
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
	
	printf("%s\t%s\t%s\t%d\t%.2f\t", Name, Genre, opM, Code, Price);
}
	void save(){
		
		FILE *pont;
		pont = fopen("Ex5.txt", "w");
	
		fprintf(pont, "\nNOME: %s\tCONSOLE: %s\t GENERO: %s\t CODIGO: %d\t PRECO: %.2f", Name, Genre, opM, Code, Price);
	
		fclose(pont);
		}
};

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	
	cadastro test;
	
	do{
	test.insert();
	test.Cons();
	test.save();
	fflush(stdin);
	}while(strcmp(test.Name, test.bug) != 0);
	
	printf("\n-----------------------------------\n");

}
