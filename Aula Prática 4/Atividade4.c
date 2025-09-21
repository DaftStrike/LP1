#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
    char tico[13], teco[13];
    bool igual, chara6, min, mai, dig;
    igual = chara6 = min = mai = dig = false;

    gets(tico);
    gets(teco);

    if(strcmp(tico, teco) == 0 && strlen(tico) >= 6){
        igual = chara6 = true;
        for(int i = 0; i < strlen(tico) || i < strlen(teco); i++){
            if(islower(tico[i]))
                min = true;
            else
                if(isupper(tico[i]))
                    mai = true;
                else
                    if(isdigit(tico[i]))
                        dig = true;
        }
    }
    if(igual && chara6 && min && mai && dig)
        printf("Nova senha ok");
    else
        printf("Nova senha invalida");

    return 0;
}
