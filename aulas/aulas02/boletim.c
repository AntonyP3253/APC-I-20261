#include <stdio.h> 

int main() {
    /*
    ===================================
              BOLETIM DE NOTAS
    ===================================
    Diciplina         A1    A2    A3
    APC 1             10    9.7   8.6
    Matematica disc   8.4   9.4   9.6
    Calculo           9.8   8.9   9.2 


    
    */

    char tecla_precionada = 'a';
    int inteiro = 10;
    float decimal = 5.2f; // ate 6 casas decimais 
    double duplo = 5.2f; // ate 12 casas decimais

    printf("===================================================\n");
    printf("                 BOLETIM DE NOTAS                  \n");
    printf("===================================================\n");
    printf("Disciplina         A1    A2    A3        MF\n");
    
    int codigo_disciplina;
    float nota_a1;
    float nota_a2;
    float nota_a3;
    float media_final;

    codigo_disciplina = 118;
    nota_a1 = 9.9f;
    nota_a2 = 9.7f;
    nota_a3 = 9.6f;
    media_final = 9.5f;



    printf("%05i             %.1f    %.1f    %.1f        %.1f\n",
         nota_a1, nota_a2, nota_a3, media_final);

    codigo_disciplina = 257;
    nota_a1 = 8.4f;
    nota_a2 = 9.4f;
    nota_a3 = 9.6f;
    media_final = 9.1f;


    printf("%05i  %.1f    %.1f    %.1f        %.1f\n",
         nota_a1, nota_a2, nota_a3, media_final);
    
    codigo_disciplina = 91;
    nota_a1 = 9.8f;
    nota_a2 = 8.9f;
    nota_a3 = 9.2f;
    media_final = 9.3f;

    printf("%05i           %.1f    %.1f    %.1f        %.1f\n",
         nota_a1, nota_a2, nota_a3, media_final);
    
    return 0;
}