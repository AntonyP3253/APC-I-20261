#include <stdio.h>

int main(void) {
    int idade = 0;

    printf("Entre com a idade: \n");
    scanf("%i", &idade);

    if (idade < 0) {
        printf("Idade invalida\n");
    } else if (idade <= 12) {
        printf("Crianca\n");
    } else if (idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade < 64) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}
