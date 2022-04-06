// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>

int main(){
	int v,raz,num,n;
	
	printf("Insira o valor inicial: ");
	scanf("%d",&v);
	
	printf("Insira o valor da razao: ");
	scanf("%d",&raz);
	
	printf("Insira o valor do numero de termos: ");
	scanf("%d",&num);
	
	printf("\nValor Inicial : %d \nRazao: %d \nNumero de termos: %d\n",v,raz,num);
	
	printf("PA: %d ",v);
	n = v;
	
	for(int i = 0;i <= num; i++){
		n += raz;
		printf("  %d%  ",n);
	}
}
