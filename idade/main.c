#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(void)
{
    int anos, meses, dias, total ;
    printf("DIGITE A SUA IDADE EM ANOS: \n");
    scanf("%d", &anos);

    printf("DIGITE A SUA IDADE EM MESES: \n");
    scanf("%d", &meses);

    printf("DIGITE A SUA IDADE EM DIAS: \n");
    scanf("%d", &dias);

    total = anos * 365 + meses * 30 + dias;

    printf("A SUA IDADE EM DIAS EH: %d \n", total);

}
