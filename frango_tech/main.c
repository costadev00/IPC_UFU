#include <stdio.h>
#include <stdlib.h>

int main()
{
    float frangos, pe_direito, pe_esquerdo, total;
    printf("GRANJA FRANGO TECH!\n \n");
    pe_direito = 4;
    pe_esquerdo = 3.50;
    printf("QUANTOS FRANGO H� PRESENTE EM SUA GRANJA NO MOMENTO? \n");
    scanf("%f", &frangos);
    total = (pe_direito + pe_esquerdo) * frangos;
    printf("O PRE�O A SE COMPRAR DE CHIPS EH DE:  %.2f", total);
    return 0;
}
