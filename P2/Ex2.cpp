//MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct revendedora{
	
	int codigo;
	char produto;
	int quantidade;
	float valor;
	float total;
	
	
	void totaliza(){
		
		
		
	}
	
};

int pedido(){
	
	revendedora pedido;
	
	printf("Insira o código de barras do produto: ");
	scanf("%d", pedido.codigo);
	
	FILE *arq;
	
	arq = fopen("produtos.txt", "r");
	
	
}

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	int menu;
	
	revendedora objetos;
	
	while(menu != 4){
	printf("\n----------------\n");
	printf("Menu: \n 1 - Efetuar Pedido \n 2 - Listar Pedidos \n 3 - Listar Produtos \n 4 - Sair");
	printf("\n----------------");
	printf("\nInsira o número da opção desejada: ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1: 
			printf("Efetuar Pedido");
			system("cls");
			printf("\n----------------\n");
			printf("\nInsira o valor do deposito: ");
			scanf("%f", &pen);
			classeMain.deposito(pen);
			break;
		case 2: 
			printf("Listar Pedidos\n");
			system("cls");
			printf("\n----------------\n");
			printf("Insira o valor da retirada: ");
			scanf("%f", &pen);
			classeMain.retirada(pen);
			break;
		case 3: 
			printf("Listar Produtos\n");
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
			
	return menu;
		}
	}
	
}
