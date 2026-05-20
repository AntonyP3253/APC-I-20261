#include <stdio.h>

int main(void) {

    float nota;
    while (1) {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);
        while (getchar() != '\n'); 

        if (nota >= 0 && nota <= 10) {
            break;
        } else {
            printf("Nota invalida. Tente novamente.\n");
        }
    }

    printf("Nota valida: %.2f\n", nota);

    return 0;
}