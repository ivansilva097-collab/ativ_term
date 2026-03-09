//Contagem de Caracteres em uma String

#include <stdio.h>
#include <string.h>

int main(){
    char str[64];
    fgets(str, 64, stdin);
    printf("%d caracteres", strlen(str) - 1);
    return 0;
}
