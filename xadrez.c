#include <stdio.h>
#include <string.h>

// Função recursiva para movimento da Torre
void movimentoTorre(int casas, char direcao[10], int posicaoAtual) {
    // Caso base: quando não há mais casas para mover
    if (casas == 0) {
        return;
    }
    
    // Imprime a direção do movimento
    printf("%s\n", direcao);
    
    // Chamada recursiva reduzindo o número de casas
    movimentoTorre(casas - 1, direcao, posicaoAtual + 1);
}

// Função recursiva para movimento do Bispo com loops aninhados
void movimentoBispo(int casasVerticais, int casasHorizontais) {
    // Loop externo para movimento vertical
    for (int vertical = 0; vertical < casasVerticais; vertical++) {
        // Loop interno para movimento horizontal
        for (int horizontal = 0; horizontal < casasHorizontais; horizontal++) {
            if (vertical % 2 == 0) {
                printf("Diagonal Direita\n");
            } else {
                printf("Diagonal Esquerda\n");
            }
        }
        printf("Subir\n");
    }
}

// Função recursiva para movimento da Rainha
void movimentoRainha(int casas, char direcaoVertical[10], char direcaoHorizontal[10]) {
    // Caso base: quando não há mais casas para mover
    if (casas == 0) {
        return;
    }
    
    // Movimento vertical
    printf("%s\n", direcaoVertical);
    
    // Movimento horizontal
    printf("%s\n", direcaoHorizontal);
    
    // Chamada recursiva reduzindo o número de casas
    movimentoRainha(casas - 1, direcaoVertical, direcaoHorizontal);
}

// Função para movimento do Cavalo com loops complexos
void movimentoCavalo() {
    int limiteVertical = 2;
    int limiteHorizontal = 1;
    
    for (int vertical = 0; vertical < limiteVertical; vertical++) {
        for (int horizontal = 0; horizontal < limiteHorizontal; horizontal++) {
            // Condições específicas para movimento em L
            if (vertical == 0 && horizontal == 0) {
                printf("Duas casas para cima\n");
                continue;
            }
            
            if (vertical == 1 && horizontal == 0) {
                printf("Uma casa para a direita\n");
                break;
            }
        }
    }
}

int main() {
    printf("Movimentos da Torre:\n");
    movimentoTorre(3, "Cima", 0);
    
    printf("\nMovimentos do Bispo:\n");
    movimentoBispo(2, 2);
    
    printf("\nMovimentos da Rainha:\n");
    movimentoRainha(2, "Cima", "Direita");
    
    printf("\nMovimentos do Cavalo:\n");
    movimentoCavalo();
    
    return 0;
}
