#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_de_pessoas, cont_sim =0, cont_nao=0, cont_msim=0, cont_nmasc=0;
    char sexo;

    for(int i = 0; i<=7; i++); {
    printf("SEU SEXO EH O MASCULINO?");
    scanf("%c", &sexo);

    if(sexo == 'S') {
        printf("caiu sim  %d \n", i);
        cont_sim++;
    }
    else if(sexo == 'N'){
        printf("caiu nao %d \n",i);
        cont_nao++;
    }
}
    printf("QUANTIDADE SIM %d \n", cont_sim);
    return 0;
}
