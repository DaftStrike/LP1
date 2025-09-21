#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
    char tico[21];
    char teco[21];

    gets(tico);
    gets(teco);

    if(strcmp(tico,teco) == 0){
        printf("Strings sao identicas: case sensitive");
    }
    else{
        for(int i = 0; i < strlen(tico) || i < strlen(teco); i++){
            tico[i] = toupper(tico[i]);
            teco[i] = toupper(teco[i]);
        }
        if(strcmp(tico,teco) == 0){
            printf("Strings sao identicas: case insensitive");
        }
        else{
            printf("Strings sao diferentes");
        }
    }


    return 0;
}
