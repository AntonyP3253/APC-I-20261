#include <stdio.h>

int main(void) {
    int opcao = 0;

    printf("Menu do Jogo\n");
    printf("1. Jogar\n");
    printf("2. Configuracoes\n");
    printf("3. Sair\n");
    printf("")
    printf("Escolha uma opcao: \n");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando o jogo...\n");
            break;
        case 2:
            printf("Abrindo configuracoes...\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}