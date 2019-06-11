#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pao, broa, total, poupanca,
        quantidade_paes, quantidade_broas;
    printf("QUANTOS PAES VC VENDEU?");
    scanf("%f", &quantidade_paes);

    printf("QUANTOS BROAS VC VENDEU?");
    scanf("%f", &quantidade_broas);

    pao = 0.12 * quantidade_paes;
    broa = 1.50 * quantidade_broas;
    total = pao + broa;
    printf("SEU LUCRO TOTAL FOI DE: %.2f \n", total);
    poupanca = total * 0.10;
    printf("O VALOR DE SUA POUPANCA EH : %.2f \n", poupanca);
}
