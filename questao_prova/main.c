#include <stdio.h>

int main(){
    int x, y, z = 0, cont = 0;
    printf("digite os 2 numeros\n");
    scanf("%d %d", &x, &y);
    cont = x;
    while(cont <= y){
        if(cont != x && cont !=y){
            printf("%d ", cont);
        }
        z = z + cont;
        cont++;
    }
    printf("\na soma eh: %d", z);
    // return 0;

}
