#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int espaco=0;
    char frase[100];
    scanf("%[^\n]",frase);
    for(int i=0;frase[i]!= '\0';i++) {
    if(frase[i] == ' ' ){
        espaco++;
    }
    }
    for(int i=0;frase[i]!= '\0';i++) {
        frase[i] = frase[i] - ' ' ;
    }
    printf("tem %d espacos digitados", espaco);
    printf("a frase: %s", frase);
    return 0;
}
