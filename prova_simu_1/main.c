#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[5],i,contpos,pos[5],contneg;


   printf("DIGITE 5 NUMEROS ");

   for(i=0;i<5;i++){
   scanf("%d",&vet[i]);
   }

   for(i=0;i<5;i++){
   if (vet[i]<0){
    contneg++;
   }


   else if(vet[i]>0){
    contpos++;
    pos[i] =vet[i];

   }
   printf("QUANTIDADE DE NUMEROS NEGATIVOS E : %d",contneg);
   }


   for(i=0;i<5;i++){
   printf("NUMERS RESTANTES POSITIVOS",pos[i]);
   }







    return 0;
}
