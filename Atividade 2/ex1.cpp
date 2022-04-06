// MURILO LIMA DOS SANTOS BRAZ RA: 202873 //
#include <stdio.h>

int main()
{
	float val1;
	float val2;
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &val1);
	printf("Insira o segundo valor: ");
	scanf("%f", &val2);
	
	if (val1 == val2){ 
	printf("Ambos valores sao iguais");
}
	else{
		if (val1 > val2){
		printf("%.1f e o maior valor", val1);
	}
	else printf("%.1f e o maior valor", val2);
	}
}

