#include <stdio.h>
#include <stdlib.h>

int main()
{
    int assistindo,canal,canal_assistido4=0,canal_assistido5=0,canal_assistido7=0,canal_assistido12=0;
    char ligada;

    float audiencia_total;
    do{
        printf("a tv esta ligada? S ou N ");
        scanf("%c", &ligada);
        if(ligada == 'S') {
            assistindo = 1;
        }
        else{
            assistindo = 0;
        }
        if(assistindo) {
            printf("qual canal vc esta assistindo?(4, 5, 7 ou 12) \n");
            scanf("%d", &canal);
            if(canal == 4){
                canal_assistido4++;
            }
            else if(canal == 5){
                canal_assistido5++;
            }
            else if(canal == 7){
                canal_assistido7++;
            }
            else if(canal == 12){
                canal_assistido12++;
            }
           // printf("quantas pessoas estao assistindo? \n");
            //scanf("%f", &pessoas);
        }
    }while(canal !=0 );

    audiencia_total = canal_assistido4 + canal_assistido7 + canal_assistido5 + canal_assistido12;
    printf("a audiencia do canal 4 eh: %.2f por cento \n", canal_assistido4/audiencia_total );
    printf("a audiencia do canal 5 eh: %.2f por cento\n", canal_assistido5/audiencia_total );
    printf("a audiencia do canal 7 eh: %.2f por cento\n", canal_assistido7/audiencia_total );
    printf("a audiencia do canal 12 eh: %.2f por cento\n", canal_assistido12/audiencia_total );
    return 0;
}
