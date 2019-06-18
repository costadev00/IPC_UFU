#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, maior, menor,acm;
    maior = 0;
    menor = 0;
    x = 1;
    while(x != 0){
        printf("DIGITE O VALOR DE X \n");
        scanf("%d", &x);;
        if(x<=0){
            printf("VALORES NEGATIVOS NAO SERAO CALCULADOS");
        }
        else if(x>maior){
            maior = x;
        }
        else if(x<menor){
            menor = x;
        }
    }
    printf("O MAIOR VALOR EH: %d \n", maior);
    printf("O MENOR VALOR EH: %d \n", menor);
    return 0;
}
