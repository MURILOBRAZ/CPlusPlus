//MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float P1, P2, P3, Armazen, Aux = 0;


float Media(){
    float media;
    media = (P1 + (2*P2))/3;
    return media;
}

float Media1(){
    float media1;
	
	if(P1 > P2){
    media1 = (P1 + (2*P3))/3;
    return media1;
}
   else{
    media1 = (P2 + (2*P3))/3;
    return media1;
}
}

float aprovado(){
    if (Media() >= 5 ){
        printf("Aluno APROVADO!!");
    }
    else{ 
    printf("Aluno REPROVADO!!\n");
    printf("--------------------------------\n");
    printf("Insira a nota da P3: ");
    scanf("%f", &P3);
    Aux = 1;
    }
}

float aprovado1(){
    if (Media1() >= 5 ){
    	printf("A média foi: %.2f\n", Media1());
    	printf("--------------------------------\n");
      printf("Aluno APROVADO!\n");
    }
    else {
    printf("A média foi: %.2f\n", Media1());
    printf("--------------------------------\n");
    printf("DP!!");
    }
}

    int main(){

    system ("color 02");
    setlocale(LC_ALL,"");

    printf("Insira a nota da P1: ");
    scanf("%f", &P1);

    printf("Insira a nota da P2: ");
    scanf("%f", &P2);

	Media();

    printf("--------------------------------");
    printf("\nA média foi: %.2f\n", Media());
    printf("--------------------------------\n");
	
	aprovado();
	
	if(Aux = 1){
		Media1();
	}
    aprovado1();
}

