#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[4], x;
    scanf("%d", &x);
    for(int i = 0;i<4;i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0;i<4;i++){
        if(x == vet[i]){
            printf("foi encontrado o valor igual %d \n",vet[i]);
        }
        else{
            printf("x nao foi encontrado na posicao %d \n", vet[i]);
        }
    }
    return 0;
}
