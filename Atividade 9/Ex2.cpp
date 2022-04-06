//MURILO LIMA DOS SANTOS BRAZ  RA: 202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	int help = 0;
	int contaC;
	float SaldoCC; 
	float SaldoPP;
	FILE *Banco;
	
	Banco = fopen("BancoEX2.txt", "w+");
	
	while(help == 0){
	printf("Insira sua conta corrente: ");
	scanf("%d", &contaC);

	if(contaC != 99999 && contaC > 9999 && contaC < 100000){
			
	printf("Insira o saldo da conta corrente: ");
	scanf("%f", &SaldoCC);
	fflush(stdin);
	printf("Insira o Saldo da Poupança: ");
	scanf("%f", &SaldoPP);
	fprintf(Banco,"%d\t%.2f\t%.2f\n", contaC, SaldoCC, SaldoPP);
	fflush(stdin);
	
	
	system("cls");
}
else{
	break;}
}			
}
