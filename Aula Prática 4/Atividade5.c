#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char persona[26];
    int alfabeta[26];

    gets(persona);

    //Zera Contagem de Alfabeta
    for(int i = 0; i <strlen(alfabeta); i++)
        alfabeta[i] = 0;

    //Conta Letras
    for(int i = 0; i < strlen(persona); i++){
        persona[i] = toupper(persona[i];
        alfabeta[i]++;
    }
    return 0;
}
