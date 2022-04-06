// MURILO LIMA DOS SANTOS BRAZ RA:202873

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 int cliente = 0;
	 
	 int contagem = 0;
	 
	 int idade = 0, salario = 0, sexo = 0, emprestimo = 0;
	 
	 int contSalario, somaSalario, mediaSalario, maiorSalario, maiorEmprestimo;
	 
	 int num[10][4];
	
	printf("\n  -------------------\n");
	printf("PESQUISA DE EMPRÉSTIMO!");
	printf("\n  -------------------\n");
	
    for(cliente ; cliente < 10; cliente++){
    for(contagem ; contagem < 10; contagem++){

		printf("\n--- CLIENTE %d ---\n", contagem + 1);
	
	
		printf("  ----------------\n");
        printf("  Insira sua Idade: ");
        scanf("%d",&num[cliente][0]);
        
	system("pause");

        printf("\n----------------\n");
        printf("Insira seu salário:R$ ");
        scanf("%d",&num[cliente][1]);

	system("pause");

		printf("\n--- Qual seu sexo? ---\n");
    	printf("1 - Maculino \n2- Feminino\n - ");
    	scanf("%d", &num[cliente][2]);
	
	system("pause");
	
		printf("\n----------------\n");
		printf("Insira o valor do seu Empréstimo:R$ ");
		scanf("%d", &num[cliente][3]);
	
	system("pause");
	system("cls");
	
        }
    }
    
    for(cliente; cliente < 10; cliente++){
    	
    	contSalario = num[cliente][1];
    	
    	somaSalario = somaSalario + num[cliente][1];
    	
    			if( contSalario > maiorSalario){
    				
    				maiorSalario = contSalario;
    				maiorEmprestimo = cliente;
    				
				}
		
		printf("\n");
    	
	}
}
	 

