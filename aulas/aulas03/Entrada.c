#include <stdio.h>

int main() {
    /* entrada de dados*/

    char tecla_pressionada;

    printf("Presione uma tecla:");
    scanf("%c" , &tecla_pressionada);
    
    printf(" voce precionou a tecla %c\n" , tecla_pressionada);

    int idade;

    printf("informe a sua idade: ");
    scanf("%i" , &idade);
    while(getchar() != '\n'); // limpar buffer

    printf("voce tem %i anos\n", idade);

    float preço;
    printf("Informer o preço da passagem: ");
    scanf("%f", &preço);
    while(getchar() != '\n');

    printf(" O preço da passagem eh %.2f \n", preço);

    return 0;


}