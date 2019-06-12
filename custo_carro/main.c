#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo_consumidor, percentagem_distribuidor, imposto, custo_total;

    printf("QUAL FOI O CUSTO DO CARRO?");
    scanf("%f", &custo);

    percentagem_distribuidor = custo * 0.28;
    imposto = custo * 0.45;

    custo_total = custo + percentagem_distribuidor + imposto;
    printf("O CUSTO TOTAL EH DE : %.2f \n", custo_total);
    return 0;
}
