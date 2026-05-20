#include <stdio.h>

int main(void) {

    int numero = 0;
    int numero2 = 0;

    printf("Entre com um numero inteiro: \n");
    scanf("%i", &numero);
    scanf("%i", &numero2);

    printf("O primeiro numero digitado foi: %i\n", numero);
    printf("O segundo numero digitado foi: %i\n", numero2);

    return 0;
}