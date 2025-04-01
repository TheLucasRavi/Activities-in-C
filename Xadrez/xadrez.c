#include <stdio.h>

// Programa que simula movimentos de Torre, Bispo e Rainha usando diferentes estruturas de repetição

int main() {
    // Declaração das variáveis para o número de casas
    const int casas_torre = 5;    // Movimento da Torre (5 casas)
    const int casas_bispo = 5;    // Movimento do Bispo (5 casas)
    const int casas_rainha = 8;   // Movimento da Rainha (8 casas)
    int i;                        // Contador para as estruturas de repetição

    // Simulação do movimento da Torre - usando FOR
    // A Torre move-se 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casas_torre; i++) {
        printf("Direita\n");      // Imprime a direção a cada casa
    }
    printf("\n");                 // Linha em branco para separação

    // Simulação do movimento do Bispo - usando WHILE
    // O Bispo move-se 5 casas na diagonal (cima e direita)
    printf("Movimento do Bispo:\n");
    i = 1;                        // Reinicia o contador
    while (i <= casas_bispo) {
        printf("Cima, Direita\n"); // Movimento diagonal combina duas direções
        i++;                      // Incrementa o contador
    }
    printf("\n");                 // Linha em branco para separação

    // Simulação do movimento da Rainha - usando DO-WHILE
    // A Rainha move-se 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 1;                        // Reinicia o contador
    do {
        printf("Esquerda\n");     // Imprime a direção a cada casa
        i++;                      // Incrementa o contador
    } while (i <= casas_rainha);

    return 0;
}