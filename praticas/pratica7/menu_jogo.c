#include <stdio.h>
int main(void) {
 
    int escolha;
 
    while (1) {
               
        printf("Menu do Jogo:\n");
        printf("1. Novo Jogo\n");
        printf("2. Continuar\n");
        printf("3. Ver Pontuacao\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        if (escolha >= 1 && escolha <= 3) {
            printf("Opcao %d selecionada.\n", escolha);
        } else if (escolha == 4) {
            printf("Saindo do jogo.\n");
            break;
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
        while (getchar() != '\n');
    }




    return 0;
}