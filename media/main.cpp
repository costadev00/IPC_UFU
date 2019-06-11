#include <stdio.h>
#include <stdlib.h>

int main()
{
    //SUPOSIÇÃO DE SEU SEMESTRE VALE 100;
    printf("\n--------------------------\n \n");
    printf("SEU SEMESTRE EM CALCULO !\n \n");
    printf("--------------------------\n");
    float n1, n2, n3, n4, trabalho1,trabalho2, trabalho3,
    trabalho4, trabalho5, soma;

    printf("DIGITE O VALOR DA PROVA 1 : \n");
    scanf("%f", &n1);

    printf("DIGITE O VALOR DA PROVA 2 :\n");
    scanf("%f", &n2);

    printf("DIGITE O VALOR DA PROVA 3 : \n ");
    scanf("%f", &n3);

    printf("DIGITE O VALOR DA PROVA 4 : \n ");
    scanf("%f", &n4);

    printf("DIGITE O VALOR DO TRABALHO 1 : \n");
    scanf("%f", &trabalho1);

    printf("DIGITE O VALOR DO TRABALHO 2 :\n");
    scanf("%f", &trabalho2);

    printf("DIGITE O VALOR DO TRABALHO 3 : \n");
    scanf("%f", &trabalho3);

    printf("DIGITE O VALOR DO TRABALHO 4 : \n");
    scanf("%f", &trabalho4);

    printf("DIGITE O VALOR DO TRABALHO 5 : \n");
    scanf("%f", &trabalho5);

    soma = n1 + n2 + n3 + n4 + trabalho1 + trabalho2 +
    trabalho3 + trabalho4 + trabalho5;

    if (soma>= 60) {
        printf("SUA NOTA EH %.2f\n", soma);
        printf("PARABENS VC PASSOU \n");
    }

    else if (soma == 58 || soma == 59) {
        printf("SUA NOTA EH %.2f\n", soma);
        printf("VA PEDIR ESSA NOTA AO SEU PROFESSOR");
    }
    else {
        printf("SUA NOTA EH %.2f\n", soma);
        printf("REPROVADO");
    }
    return 0;
}
