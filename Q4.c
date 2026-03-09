//Conversão de Temperatura

#include <stdio.h>

int main(){
    float tp;
    float conv;
    int x;
    printf("Escreva 1 - C para F \nEscreva 2 - F para C\n ");
    scanf("%d", &x);
    if(x == 1){
        printf("Escreva o valor em Celsius: ");
        scanf("%f", &tp);
        conv = ((tp*9)/5)+32;
        printf("%.1f F", conv);
    }
    if(x == 2){
        printf("Escreva o valor em Fahrenheit: ");
        scanf("%f", &tp);
        conv = ((tp-32)*5)/9;
        printf("%.1f C", conv);
    }
    return 0;
}