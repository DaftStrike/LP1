#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char stringona[16], doppel[16];
    fgets(stringona, 16, stdin);

    strcpy(doppel, stringona);

    //Digitada
    printf("%s", stringona);

    //Inverte Mai�sculas
    for(int i = 0; i < strlen(stringona); i++){
       if(isupper(stringona[i])){
            stringona[i] = tolower(stringona[i]);
        }
    }
    printf("%s", stringona);
    strcpy(stringona, doppel);

    //Inverte Min�sculas
    for(int i = 0; i < strlen(stringona); i++){
       if(islower(stringona[i])){
            stringona[i] = toupper(stringona[i]);
        }
    }
    printf("%s", stringona);
    strcpy(stringona, doppel);

    //Apenas Primeira Mai�scula
    for(int i = 0; i < strlen(stringona); i++){
        if(i == 0){
            stringona[i] = toupper(stringona[i]);
        }
        else{
            stringona[i] = tolower(stringona[i]);
        }
    }
    printf("%s", stringona);
    strcpy(stringona, doppel);

    //Inverte Tudo
    for(int i = 0; i < strlen(stringona); i++){
       if(isupper(stringona[i])){
            stringona[i] = tolower(stringona[i]);
        }
        else{
            stringona[i] = toupper(stringona[i]);
        }
    }
    printf("%s", stringona);
    strcpy(stringona, doppel);
    return 0;
}
