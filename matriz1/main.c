#include <stdio.h>

int main(){
    int x, b = 1, y, z = 0, cont = 0;
    printf("digite os 2 numeros\n");
    scanf("%d %d", &x, &y);
    cont = x;
    while(cont <= y){
        if(cont != x && cont !=y){
         b = b * cont;
        printf("%d ", cont);
        }
        z = z + cont;
        cont++;
    }
    printf("\na soma eh: %d", z);
    printf("\na mult eh: %d", b);
    return 0;

}
