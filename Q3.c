//Soma de Números em um Array

#include <stdio.h>

int main(){
    int array[5];
    int soma = 0;
    printf("digite 5 numeros inteiros: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
        soma += array[i];
    }
    printf("soma: %d", soma);
    return 0;
}
