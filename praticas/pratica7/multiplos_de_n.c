#include <stdio.h>

int main(void) {

    int numero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Multiplos de %d: ", numero);
    for (int i = 1; i <= 100; i++) {
        printf("%d ", numero * i);
    }
    printf("\n");

    return 0;
}