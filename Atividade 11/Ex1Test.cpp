#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct classe{
	
	char nome[40];
	float numCC;
	float Saldo;
	int menu;
	
	void retirada(float pen){
		
		Saldo = Saldo - pen;
		
		printf("--------------------------------\n");
		printf("A sua retirada foi de R$%.2f\n", pen);
		printf("--------------------------------\n");
		system("pause");
		system("cls");
	}
	void deposito(float pen){
		
		Saldo = Saldo + pen;
		
		printf("--------------------------------\n");
		printf("O seu depósito foi de R$%.2f\n", pen);
		printf("--------------------------------\n");
		system("pause");
		system("cls");
		
	}
	void saldo(){
		
		printf("--------------------------------\n");
		printf("O seu saldo é de %.2f\n", Saldo);
		printf("--------------------------------\n");
		system("pause");
		system("cls");
		
	}
	
};

int main(){
	
	system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 int i = 41;
	 float pen;
	 classe classeMain;

	do{
	 printf("--------------------------------\n");
	 printf("Insira o seu nome: ");
	 gets(classeMain.nome);
	}while( i <= strlen(classeMain.nome));
	fflush(stdin);
	 
	do{
	printf("\nInsira sua conta corrente: ");
	scanf("%f", &classeMain.numCC);
	}while(classeMain.numCC > 99999);
	fflush(stdin);

	 printf("\nInsira o saldo da conta corrente: ");
	scanf("%f", &classeMain.Saldo);
	fflush(stdin);
	printf("\n--------------------------------\n");
	
	system("cls");
	
	
	
	while(classeMain.menu != 4){
	printf("\n----------------\n");
	printf("Menu: \n 1 - Deposito \n 2 - Retirada \n 3 - Saldo \n 4 - Sair");
	printf("\n----------------");
	printf("\nInsira o número da opção desejada: ");
	scanf("%d",&classeMain.menu);
	switch(classeMain.menu)
	{
		case 1: 
			printf("Deposito",classeMain.menu);
			system("cls");
			printf("\n----------------\n");
			printf("\nInsira o valor do deposito: ");
			scanf("%f", &pen);
			classeMain.deposito(pen);
			break;
		case 2: 
			printf("Retirada\n",classeMain.menu);
			system("cls");
			printf("\n----------------\n");
			printf("Insira o valor da retirada: ");
			scanf("%f", &pen);
			classeMain.retirada(pen);
			break;
		case 3: 
			printf("Saldo\n",classeMain.menu);
			system("cls");
			classeMain.saldo();
			break;
		case 4: 
			system("cls");
			printf("------------\n");
		   	printf("- ATÉ LOGO -\n");
		    printf("------------\n");
			break;
		default: 
			printf("Opção Invalida\n");
			system("cls");
			break;
			
	return classeMain.menu;
		}
	}
}
