#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char stringona[19];
    int cont;
    fgets(stringona, 19, stdin);

    //Conta Letras
    for(int i = 0; i  < strlen(stringona); i++){
        if(isalpha(stringona[i])){
            cont++;
        }
    }
    printf("%d", cont);
    cont = 0;

    //Conta Mai�sculas
    for(int i = 0; i < strlen(stringona); i++){
       if(isupper(stringona[i])){
            cont++;
        }
    }
    printf("\n%d", cont);
    cont = 0;

    //Conta Min�sculas
    for(int i = 0; i < strlen(stringona); i++){
       if(islower(stringona[i])){
            cont++;
        }
    }
    printf("\n%d", cont);
    cont = 0;

    //Conta N�meros
    for(int i = 0; i < strlen(stringona); i++){
       if(isdigit(stringona[i])){
            cont++;
        }
    }
    printf("\n%d", cont);
    cont = 0;

    //Conta Especiais
    for(int i = 0; i < strlen(stringona); i++){
       if(!(isalpha(stringona[i]) || isdigit(stringona[i]))){
            cont++;
        }
    }
    cont--;
    printf("\n%d", cont);
    cont = 0;

    return 0;
}
