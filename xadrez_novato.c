//Jogo Xadrez Novato, movimentos básicos de Torre, Bispo e Rainha. Versao 1

#include <stdio.h>
int main() {
    
    // Nível Novato - Movimentação das Peças
    // Definindo constantes para o número de casas que cada peça pode se mover
    const int MAX_MOVES_TORRE = 5;   // Torre pode se mover até 5 casas na horizontal ou vertical
    const int MAX_MOVES_BISPO = 9; // Bispo pode se mover até 5 casas em diagonal
    const int MAX_MOVES_RAINHA = 8;  // Rainha pode se mover até 8 casas em qualquer direção

    int bispo = 0; // Inicializando a variável Bispo
    int rainha = 0; // Inicializando a variável Rainha


    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int torre = 0; torre < MAX_MOVES_TORRE; torre++)
    {
        printf("Torre se moveu %d casas para a direita.\n", torre + 1);
    }
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade


    // Implementação de Movimentação do Bispo
    // Simulando a movimentação do Bispo em diagonal
    printf("Movimentação do Bispo:\n");
    do
    { printf("Bispo se moveu:\n");

            if (bispo % 2 == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        bispo++; // Incrementando o movimento do Bispo
    } while (bispo <= MAX_MOVES_BISPO);
    printf("Bispo Moveu 5 Casas na Diagonal\n");
    

printf("\n"); // Adicionando uma linha em branco para melhor legibilidade
printf("\n"); // Adicionando uma linha em branco para melhor legibilidade


    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    while (rainha < MAX_MOVES_RAINHA) // Corrigido para uma condição válida
    {
        printf("Rainha se moveu %d casas para esquerda.\n", rainha + 1);
        rainha++; // Incrementando o movimento da Rainha
        if (rainha >= MAX_MOVES_RAINHA) {
            break; // Parar quando atingir o máximo de movimentos da Rainha
        }
    }
    
    return 0;
}


//Jogo Xadrez Novato, movimentos básicos de Torre, Bispo e Rainha. Versao 2 refatorado

#include <stdio.h>
int main() {
    
    // Nível Novato - Movimentação das Peças
    // Definindo constantes para o número de casas que cada peça pode se mover
    const int MAX_MOVES_TORRE = 5;   // Torre pode se mover até 5 casas na horizontal ou vertical
    const int MAX_MOVES_BISPO = 5; // Bispo pode se mover até 5 casas em diagonal
    const int MAX_MOVES_RAINHA = 8;  // Rainha pode se mover até 8 casas em qualquer direção

    int bispo = 0; // Inicializando a variável Bispo
    int rainha = 0; // Inicializando a variável Rainha


    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int torre = 0; torre < MAX_MOVES_TORRE; torre++)
    {
        printf("Torre moveu: %d casas Horizontal para a direita.\n", torre + 1);
    }
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade
    printf("\n"); // Adicionando uma linha em branco para melhor legibilidade


    // Implementação de Movimentação do Bispo
    // Simulando a movimentação do Bispo em diagonal
    do
    { printf("Bispo se moveu: %d casas em diagonal cima-direita\n", bispo + 1);
        bispo++; // Incrementando o movimento do Bispo
    } while (bispo < MAX_MOVES_BISPO);    

printf("\n"); // Adicionando uma linha em branco para melhor legibilidade
printf("\n"); // Adicionando uma linha em branco para melhor legibilidadese


    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    while (rainha < MAX_MOVES_RAINHA) // Corrigido para uma condição válida
    {
        printf("Rainha se moveu: %d casas Horizontal para a esquerda.\n", rainha + 1);
        rainha++; // Incrementando o movimento da Rainha
    }
    
    return 0;
}

//Jogo Xadrez Novato, movimentos básicos de Torre, Bispo e Rainha. Versao 3 refatorado
// Objetivo: Demonstrar o uso de for, while e do while com movimentação de peças

#include <stdio.h>

int main() {
    // Constantes que definem os limites de movimento de cada peça
    const int MAX_MOVES_TORRE = 5;    // Torre: 5 casas para a direita
    const int MAX_MOVES_BISPO = 5;    // Bispo: 5 casas na diagonal superior direita
    const int MAX_MOVES_RAINHA = 8;   // Rainha: 8 casas para a esquerda

    int movimentosBispo = 0;  // Contador para o loop do bispo
    int movimentosRainha = 0; // Contador para o loop da rainha

    // ----- Movimentação da Torre (usando FOR) -----
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= MAX_MOVES_TORRE; i++) {
        printf("Torre moveu %d casa(s) para Direita.\n", i);
    }

    printf("\n"); // Espaço para legibilidade

    // ----- Movimentação do Bispo (usando DO WHILE) -----
    printf("Movimentação do Bispo:\n");
    do {
        printf("Bispo moveu 1 casa em Diagonal (Cima + Direita).\n");
        movimentosBispo++;
    } while (movimentosBispo < MAX_MOVES_BISPO);

    printf("\n");

    // ----- Movimentação da Rainha (usando WHILE) -----
    printf("Movimentação da Rainha:\n");
    while (movimentosRainha < MAX_MOVES_RAINHA) {
        printf("Rainha moveu 1 casa para Esquerda.\n");
        movimentosRainha++;
    }

    return 0;
}
