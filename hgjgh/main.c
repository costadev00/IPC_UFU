#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
    int acm1 =0, acm2=0;
    char str1[100];
    printf("digites os zeros e uns \n");
    gets(str1);
    for(int i =0; str1[i]!= '\0';i++){
        if(str1[i] == '1') {
            acm1 = acm1 + 1;
        }
        else{
            acm2 = acm2 + 1;
        }
    }
    printf("contem %d uns \n", acm1);
    printf("contem %d zeros", acm2);

}
