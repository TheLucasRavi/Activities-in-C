#include <stdio.h>

// Dimensões do tabuleiro
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Declaração da matriz 10x10 para o tabuleiro (0 = água, 3 = navio)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Declaração dos vetores para os navios (cada navio tem 3 posições)
    int navio1[TAMANHO_NAVIO] = {3, 3, 3}; // Navio 1 (horizontal)
    int navio2[TAMANHO_NAVIO] = {3, 3, 3}; // Navio 2 (vertical)
    
    // Variáveis para as coordenadas iniciais dos navios
    int linha_navio1 = 2, coluna_navio1 = 3; // Navio 1: horizontal, começa em (2,3)
    int linha_navio2 = 5, coluna_navio2 = 7; // Navio 2: vertical, começa em (5,7)
    
    int i, j; // Contadores para loops

    // Inicializa o tabuleiro com 0 (água)
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Validação do Navio 1 (horizontal)
    // Verifica se o navio cabe no tabuleiro a partir da coluna inicial
    if (coluna_navio1 + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: Navio 1 (horizontal) fora dos limites do tabuleiro!\n");
        return 1;
    }

    // Validação do Navio 2 (vertical)
    // Verifica se o navio cabe no tabuleiro a partir da linha inicial
    if (linha_navio2 + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: Navio 2 (vertical) fora dos limites do tabuleiro!\n");
        return 1;
    }

    // Posiciona o Navio 1 (horizontal)
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio1][coluna_navio1 + i] = navio1[i];
    }

    // Verifica sobreposição antes de posicionar o Navio 2
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_navio2 + i][coluna_navio2] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o Navio 2!\n");
            return 1;
        }
    }

    // Posiciona o Navio 2 (vertical)
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio2 + i][coluna_navio2] = navio2[i];
    }

    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval (0 = agua, 3 = navio):\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada elemento com um espaço
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }

    return 0;
}