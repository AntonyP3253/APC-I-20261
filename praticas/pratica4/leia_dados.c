#include <stdio.h>

int main(void) {

    int idade = 0;
    float altura = 0.0;
    char genero = ' ';
    float peso = 0.0;

    printf("Entre com a idade: \n");
    scanf("%i", &idade);
    printf("Entre com a altura: \n");
    scanf("%f", &altura);
    printf("Entre com o genero (M/F): \n");
    scanf(" %c", &genero);
    printf("Entre com o peso: \n");
    scanf("%f", &peso);
    printf("A idade digitada foi: %i\n", idade);
    printf("A altura digitada foi: %.2f\n", altura);
    printf("O genero digitado foi: %c\n", genero);
    printf("O peso digitado foi: %.2f\n", peso);

    return 0;
}