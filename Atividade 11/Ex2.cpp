// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct controle{

	char nome[20];
	char funcao[20];
	int numR;
	int dias;
	int diasf;
	float sal;
	int menu;
	float porcen;
	float salm;
	
	void aumento(float porcen1){
		
		porcen1 = porcen;
		sal = sal + (sal * porcen1);
		printf("Porcentagem de aumento salarial: %c%.2f\n", 37, porcen1*100);
		system("pause");
		system("cls");
	}
	void faltas(int diasF){
		
		diasF++;
		dias = dias - diasF;
		printf("\n--------------------------------\n");
		printf("Mais 1 dia adicionado as faltas!!\n");
		printf("\n--------------------------------\n");
		system("pause");
		system("cls");
	}
	void Salmensal(float salM){
		
		salM = sal/30;
		salM = salM*dias;
		printf("Sal�rio Mensal = R$%.2f\n", salM);
		system("pause");
		system("cls");
	}
	void M(){
	while(menu != 4){
	printf("\n----------------\n");
	printf("Menu: \n 1 - Aumento Salarial \n 2 - Adi��o de Faltas \n 3 - C�lculo Sal�rio Mensal \n 4 - Sair");
	printf("\n----------------");
	printf("\nInsira o n�mero da op��o desejada: ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1: 
			printf("Aumento Salarial");
			system("cls");
			printf("\n----------------\n");
			printf("Insira a Porcentagem do Aumento: ");
			scanf("%f", &porcen);
			porcen = porcen/100;
			system("cls");
			aumento(porcen);
			break;
		case 2: 
			printf("Adi��o de Faltas\n");
			system("cls");
			printf("\n----------------\n");
			faltas(diasf);
			break;
		case 3: 
			printf("C�lculo Sal�rio Mensal\n");
			system("cls");
			Salmensal(salm);
			break;
		case 4: 
			system("cls");
			printf("------------\n");
		   	printf("- AT� LOGO -\n");
		    printf("------------\n");
			break;
		default: 
			printf("Op��o Invalida\n");
			system("cls");
			break;

		}
	}
}
};

int main(){
	system ("color 02");
	 setlocale(LC_ALL,"");
	 
	controle controleCad;
	
	printf("\n--------------------------------\n");
	printf("Insira seu nome: ");
	gets(controleCad.nome);
	
	printf("Insira sua Fun��o: ");
	gets(controleCad.funcao);
	
	printf("Insira o n�mero do seu registro: ");
	scanf("%d", &controleCad.numR);
	
	printf("Insira a quantidade de dias trabalhados: ");
	scanf("%d", &controleCad.dias);
	
	printf("Insira o valor do Sal�rio Mensal: ");
	scanf("%f", &controleCad.sal);
	printf("\n--------------------------------\n");
	
	system("cls");
	controleCad.M();
}
	 
