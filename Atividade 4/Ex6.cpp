// MURILO LIMA DOS SANTOS BRAZ RA:202873
#include <stdio.h>
int main(){

    int mes;
	int normal = 30;
	int anormal = 31; 
	int menos = 28; 
	int menosmais = 29;

    printf("Insira um mes do ano 'em numero': ");
    scanf("%d",&mes);

    switch(mes)
    {
        case 1:
            printf("Janeiro tem %d dias! ",normal);
            break;
        case 2:
            printf("Fevereiro tem %d dias em ano normal e \n %d dias em ano bissexto! ",menos,menosmais);
            break;
        case 3:
            printf("Marco tem %d dias! ",anormal);
            break;
        case 4:
            printf("Abril tem %d dias! ",normal);
            break;
        case 5:
            printf("Maio tem %d dias! ",anormal);
            break;
        case 6:
            printf("Junho tem %d dias! ",normal);
            break;
        case 7:
            printf("Julho tem %d dias! ",anormal);
            break;
        case 8:
            printf("Agosto tem %d dias! ",anormal);
            break;
        case 9:
            printf("Setembro tem %d dias! ",normal);
            break;
        case 10:
            printf("Outubro tem %d dias! ",normal);
            break;
        case 11:
            printf("Novembro tem %d dias! ",normal);
            break;
        case 12:
            printf("Dezembro tem %d dias! ",anormal);
            break;

    }
}
