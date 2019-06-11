#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, produto, continuar, soma, banana, laranja, maca, produto_code, valor, troco, teste;
    produto = 400;
    banana = 3;
    laranja = 5;
    maca = 2;
    soma = 0;
    teste = 1;

    printf("BANANA : 1\n");
    printf("MACA: 2\n");
    printf("LARANJA: 3\n \n");

    while (produto == 400)
    {
        printf("DIGITE O CODIGO DO PRODUTO:  ");
        scanf("%d", &produto_code);
        printf("DESEJA FINALIZAR A COMPRA? (0-SIM 1-NAO) \n");
        scanf("%d", &continuar);

        switch (produto_code)
        {
        case 1:
            soma = soma + banana;
            break;

        case 2:
            soma = soma + maca;
            break;
            ;

        case 3:
            soma = soma + laranja;
            break;
        }
        if (continuar == 1)
        {
            produto = 400;
        }

        if (continuar == 0)
        {
            produto = 200;
            printf("O VALOR DA SUA COMPRA EH:  %d REAIX \n", soma);
            printf("QUAL FOI O VALOR DADO PELO CLIENTE \n?");
            scanf("%d", &valor);
            troco = valor - soma;
            printf("O TROCO A SER DEVOLVIDO EH: %d REAIX \n", troco);
        }
    }
    return 0;
}
