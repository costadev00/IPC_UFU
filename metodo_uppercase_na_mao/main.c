#include <stdio.h>
int main()
{
    //DECLARA A FRASE
    char palavra[100];
    //LÊ A SUA PALAVRA
    scanf("%[^\n]",palavra);

    for(int i=0; palavra[i] != '\0'; i++) {
        // DIMINUI A FRASE COM O ESPAÇO(VALOR 32 NA TABELA ASCII)
        palavra[i] = palavra[i] - ' ';
    }
    printf("PALAVRA MAISCULA: %s \n", palavra);
    return 0;
}
