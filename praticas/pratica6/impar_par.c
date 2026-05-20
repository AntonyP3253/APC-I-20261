#include <stdio.h>
int main(void) {

    int numero = 0;

    printf("Entre com um numero inteiro: \n");
    scanf("%i", &numero);

    int eh_par = numero % 2 == 0;

    if (eh_par) {
        printf("O numero %i e par\n", numero);
    }else {
        printf("O numero %i e impar\n", numero);
    }

    return 0;
}