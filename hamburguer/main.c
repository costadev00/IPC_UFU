#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sanduiches, queijos, presuntos, hamburgueres, total_queijos, total_presuntos, total_hamburgueres;
    printf("BEM VINDO A HAMBURGUERIA DO COSTA!\n \n");
    presuntos = 50;
    queijos = presuntos * 2;
    hamburgueres = 100;
    printf("QUANTOS SANDUÍCHES VOCÊ VAI FAZER?");
    scanf("%d", &sanduiches);
    total_queijos = (queijos * sanduiches) /1000;
    total_presuntos = (presuntos * sanduiches) / 1000;
    total_hamburgueres = (hamburgueres * sanduiches) / 1000;
    printf("O TOTAL NECESSARIO DE QUEIJOS EH DE %d KG \n", total_queijos);
    printf("O TOTAL NECESSARIO DE PRESUNTOS EH DE %d KG \n", total_presuntos);
    printf("O TOTAL NECESSARIO DE HAMBURGUERES EH DE %d KG \n", total_hamburgueres);

    return 0;
}
