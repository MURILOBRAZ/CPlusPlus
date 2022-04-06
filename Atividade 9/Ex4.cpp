//MURILO LIMA DOS SANTOS BRAZ  RA: 202873
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	 system ("color 02");
	 setlocale(LC_ALL,"");
	 
	 FILE *ArqWriteVoto; 
   
    ArqWriteVoto = fopen("eleicao.txt","r");	
	
	int C1,C2,C3,VNulo;
    int Nulo;
    int NuloT;
   
    float voto1,voto2,voto3;
    float voto1A,voto2B,voto3C,votoT; 
    
   if(ArqWriteVoto == 0)
	{
		printf("Falha ao abrir o arquivo");
		return 1;
	}
	
    rewind(ArqWriteVoto);
	while(!feof(ArqWriteVoto))
	{
	  fscanf(ArqWriteVoto,"%d %d %d %d",&Nulo,&C1,&C2,&C3);  
		
      if(Nulo == 0 || C1 >= 0 || C2 >= 0 || C3 >= 0)
      {
      	VNulo++;
	  }
	  
	  if(Nulo <= 1 || C1 == 1 || C2 >= 1 || C3 >= 1)
      {
      	voto1++;
	  }
	  
	  if(Nulo <= 2 || C1 <= 2 || C2 == 2 || C3 >= 2)
      {
      	voto2++;
	  }
	  
	  if(Nulo <= 3 || C1 <= 3 || C2 <= 3 || C3 == 3)
      {
      	voto3++;
	  }
	}
	fclose(ArqWriteVoto);
	
	votoT = voto1 + voto2 + voto3 + VNulo;
	NuloT = VNulo;
	
	voto1A = (voto1/votoT) * 100;
	voto2B = (voto2/votoT) * 100;
	voto3C = (voto3/votoT) * 100;
	
    printf("O total de votos é: %.2f\n",votoT);
    printf("Votos Chapa 1: %.2f\nVotos Chapa 2: %.2f\nVotos Chapa 3: %.2f\n",voto1,voto2,voto3);
    printf("O total de votos brancos ou nulos é: %d\n",NuloT);
    
    printf("A porcentagem da Chapa 1 é: %.2f%%\n",voto1A);
    printf("A porcentagem da Chapa 2 é: %.2f%%\n",voto2B);
    printf("A porcentagem da Chapa 3 é: %.2f%%\n",voto3C);
    
}
