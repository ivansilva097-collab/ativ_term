//Impressão de Números de 1 a N

#include <stdio.h>

int main(){
    int n;
    while(1){
        printf("\n");
        printf("digite um numero inteiro positivo: ");
        scanf("%d", &n);
        if (n < 1){
            break;
        }
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}