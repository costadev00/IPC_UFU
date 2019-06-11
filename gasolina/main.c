#include <stdio.h>

int main() {
    int a_pagar, preco_gasolina, litros;
    printf("SEJA BEM VINDO AO POSTO IPIRANGA: \n");
    preco_gasolina = 5;

    printf("QUANTOS REAIS A PAGAR? \n");
    scanf("%d", &a_pagar);

    litros = a_pagar / preco_gasolina;
    printf("A QUANTIDADE DE LITROS EH: %d", litros);

}
