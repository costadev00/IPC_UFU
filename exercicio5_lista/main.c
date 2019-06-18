#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],vet2[10],vet3[10];

    for(int i=0;i<10;i++) {
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<10;i++) {
        if(vet[i]>0 && vet[i]<50) {
            vet2[i] = vet[i];
        }
        if(vet[i]>51 && vet[i]<100){
            vet3[i] = vet[i];
        }
    }
    for(int i=0;i<10;i++){
    printf("vetor 1 = %d \n",vet[i]);
}
    return 0;
}
