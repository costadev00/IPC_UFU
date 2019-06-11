#include<stdio.h>
#include<stdlib.h>

int main() {
    int x, acm;
    acm =0;
    do{
        scanf("%d", &x);
        if(x != 9){
            acm++;
            printf("errou \n");
        }
        if(x == 9) {
            printf("acertou \n");
        }
    }
    while(x != 9);
    printf("vc tentou %d vezes \n", acm);
}
