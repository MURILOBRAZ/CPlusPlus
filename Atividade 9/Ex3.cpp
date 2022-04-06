//MURILO LIMA DOS SANTOS BRAZ  RA: 202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	FILE *ArqRite;
	float SaldoCC; 
	float SaldoPP;
	int ContaC;
	float conta;
	
	ArqRite = fopen("BancoEX2.txt", "r");
	
	rewind(ArqRite);
	
	while(!feof(ArqRite)){
	fscanf(ArqRite, "%d %f %f", &ContaC, &SaldoCC, &SaldoPP);
	
	 conta = SaldoCC + SaldoPP;
	 
	 printf("\nO saldo Total da sua Conta é R$%.2f", conta);
}
fclose(ArqRite);
}
