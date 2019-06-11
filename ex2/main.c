#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("BEM VINDO SEU CORNO \n");
    int i, vet[6];

    for(i=0;i<6; i++){
        scanf("%d", &vet[i]);
    }
    for(i=0;i<6;i++) {
        printf("O VETOR NA POSICAO %d E TEM O VALOR DE: %d \n",i, vet[i]);
}
}
