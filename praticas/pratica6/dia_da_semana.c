#include <stdio.h>

int main(void) {
    int dia = 0;

    printf("Entre com um numero de 1 a 7: \n");
    scanf("%i", &dia);

    switch (dia) {
        case 1:
            printf("Domingo, não eh util\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado, não eh util\n");
            break;
        default:
            printf("Numero invalido\n");
    }

    return 0;
}