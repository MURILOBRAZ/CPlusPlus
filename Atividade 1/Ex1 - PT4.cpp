// RA:202873 NOME:MURILO LIMA DOS SANTOS BRAZ
#include <stdio.h>

int main()
{
    float MM, KM;
    printf("Digite a Milha Maritima: ");
    scanf("%f",&MM);
    KM = (MM*1850)/1000;
    printf("O Valor de %.2f Milha maritima em Quilometro e %.2f km",MM, KM);
}
