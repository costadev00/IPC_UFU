#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, peso,acm1, acm2, acm3, acm4, n1,n2,n3,n4,media1,media2,media3,media4;
    idade = 0;
    peso = 0;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    acm1 = 0;
    acm2 = 0;
    acm3 = 0;
    acm4 = 0;
    media1 = 0;
    media2 = 0;
    media3 = 0;
    media4 = 0;
    while(idade>=0) {
        if(idade>=1 && idade<=10) {
            n1++;
            acm1 = acm1 + peso;
            media1 = acm1/n1;
        }
        if(idade>=11 && idade<=20) {
            n2++;
            acm2 = acm2 + peso;
            media2 = acm2/n2;
        }
        if(idade>=21 && idade<=30) {
            n3++;
            acm3 = acm3 + peso;
            media3 = acm3/n3;
        }
        if(idade>30) {
            n4++;
            acm4 = acm4 + peso;
            media4 = acm4/n4;
        }
        printf("DIGITE O PESO \n");
        scanf("%d", &peso);
        printf("DIGITE A IDADE \n");
        scanf("%d", &idade);
    }
    printf("A MEDIA DE PESOS DE 1 A 10 ANOS EH DE: %d \n", media1);
    printf("A MEDIA DE PESOS DE 11 A 20 ANOS EH DE: %d \n", media2);
    printf("A MEDIA DE PESOS DE 21 A 30 ANOS EH DE: %d \n", media3);
    printf("A MEDIA DE PESOS DE MAIORES DE 31 ANOS: %d \n", media4);
    return 0;
}
