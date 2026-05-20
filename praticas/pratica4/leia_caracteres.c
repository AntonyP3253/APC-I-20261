#include <stdio.h>

int main() {
    char letra;

    printf("Entre com um caractere: ");
    scanf("%c", &letra);
    while(getchar() != '\n');

    printf("O caractere digitado foi: %c\n", letra);
    printf("O caractere digitado foi: %i\n", letra);

    return 0;
}