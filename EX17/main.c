#include<stdio.h>
#include<stdlib.h>
#define N 10
int main() {
int num,acm, i,media, maior, menor;
acm =0;
for (i=1; i<=N; i++) {
printf("Informe o %d numero: ", i);
scanf("%d", &num);
acm = acm + num;
media = acm/10;
if (i == 1)
maior = menor = num;
else {
if (maior < num)
maior = num;
if (menor > num)
menor = num;
}
}
printf("Maior %d\n", maior);
printf("Menor %d\n", menor);
printf("A MEDIA EH: %d \n", media);
return 0;
}
