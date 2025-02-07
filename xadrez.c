#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int BISPO = 5;
    const int TORRE = 5;
    const int RAINHA = 8;
    
    int i;

    // Bispo: 5 casas na diagonal superior direita
    // Torre: 5 casas para a direita
    // Rainha: 8 casas para a esquerda

    // printf("Cima\n"); printf("Baixo\n"); printf("Esquerda\n"); printf("Direita\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.   
    printf("\n----BISPO SE MOVIMENTA PARA:----\n");

    i = 1;
    while (i <= BISPO) {
        printf("Cima & Direita\n");
        i++;
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n----TORRE SE MOVIMENTA PARA:----\n");
    i = 1;
    do {
        printf("Direita\n");
        i++;         
    } while (i <= TORRE);
    


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\n----RAINHA SE MOVIMENTA PARA:----\n");
    for (i = 1; i <= RAINHA; i++)
    {
        printf("Esquerda\n");
    }
    



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
