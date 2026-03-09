//Cálculo de Fatorial

#include <stdio.h>

int main(){
    int n;
    double fat = 1;
    printf("digite um numero inteiro: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        fat *= i;
    }
    printf("%d! = %.0f\n", n, fat);
    return 0;
}