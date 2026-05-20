#include <stdio.h>

int main(void) {

    float nota1 = 0.0;
    float nota2 = 0.0;

    printf("Entre com a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Entre com a segunda nota: \n");
    scanf("%f", &nota2);
    printf("A primeira nota digitada foi: %.2f\n", nota1);
    printf("A segunda nota digitada foi: %.2f\n", nota2);

    return 0;
}