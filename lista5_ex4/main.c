#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,idade[10],menores=0,soma_menores=0,maiores=0,soma_maiores=0;

    for(i=0;i<10;i++){
        scanf("%d",&idade[i]);
        if(idade[i]<18){
            menores++;
            soma_menores = soma_menores + idade[i];
        }
        if(idade[i]>=18) {
            maiores++;
            soma_maiores = soma_maiores + idade[i];
        }
    }
    printf("a quantidade de menores eh: %d \n", menores);
    printf("a quantidade de maiores eh: %d \n", maiores);
    printf("a soma dos menores eh: %d \n", soma_menores);
    printf("a soma dos maiores eh: %d \n", soma_maiores);

    return 0;
}
