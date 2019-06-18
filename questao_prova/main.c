#include <stdio.h>

int main(){
    int x, y, soma = 0, cont = 0;
    printf("digite os 2 numeros\n");
    scanf("%d %d", &x, &y);
    cont = x;
    while(cont <= y){
        if(cont != x && cont !=y){
            printf("%d ", cont);
        }
        soma = soma + cont;
        cont++;
    }
    printf("\na soma eh: %d", soma);
    return 0;

}
