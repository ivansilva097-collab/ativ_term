//Verificação de Número Primo

#include <stdio.h>

int main(){
    int x;
    int div = 0;
    scanf("%d", &x);
    if (x <= 1){
        div = 0;
    } else {
        for (int i = 1; i <= x; i++){
            if (x % i == 0){
                div++;
            }
        }
    }
    if (div == 2){
        printf("%d e primo", x);
    } else {
        printf("%d nao e primo", x);
    }
    return 0;
}
