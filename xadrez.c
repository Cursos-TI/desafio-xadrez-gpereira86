#include <stdio.h>
#include <string.h>

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

    int movimento_maior, movimento_menor;
    char movimento_maior_direcao, movimento_menor_direcao;
    char movimento_maior_usavel[10],movimento_menor_usavel[10];

    int erro = 0, j = 1;

    movimento_maior = 3;
    movimento_menor = 1;

    if((movimento_maior + movimento_menor) > 4)
    {
        printf("\n-------------- ERRO -------------\n");
        printf("O número máximo de movimentação permitido somando toda as direções é 4.\n");

    } else if (movimento_maior < movimento_menor)
    {
        printf("\n-------------- ERRO -------------\n");
        printf("Movimento não atende ao requisto de movimentação.\n");
    } else{

        /**
         * legenda:
         * Cima = C
         * Baixo = B
         * Direita = D
         * Esquerda = E
         */ 
        movimento_maior_direcao = 'C';
        movimento_menor_direcao = 'D';


        switch (movimento_maior_direcao)
            {
            case 'C':
                strcpy(movimento_maior_usavel, "Cima");
                break;
            case 'B':
                strcpy(movimento_maior_usavel, "Baixo");
                break;
            case 'D':
                strcpy(movimento_maior_usavel, "Direita");
                break;
            case 'E':
                strcpy(movimento_maior_usavel, "Esquerda");
                break;
            default:
                printf("\n-------------- ERRO -------------\n");
                printf("Direção escolhida desconhecida\n");
                erro = 1;
                break;
            }
        
        switch (movimento_menor_direcao)
            {
            case 'C':
                strcpy(movimento_menor_usavel, "Cima");
                break;
            case 'B':
                strcpy(movimento_menor_usavel, "Baixo");
                break;
            case 'D':
                strcpy(movimento_menor_usavel, "Direita");
                break;
            case 'E':
                strcpy(movimento_menor_usavel, "Esquerda");
                break;
            default:
                printf("\n-------------- ERRO -------------\n");
                printf("Direção escolhida desconhecida.\n");
                erro = 1;
                break;
            }
        
        if (!erro)
        {
            printf("\n----CAVALO SE MOVIMENTA PARA:----\n");

            for (int i = 1; i <= movimento_menor; i++)
            {
                while (j <= movimento_maior) 
                {
                    printf("%s\n", movimento_maior_usavel);    
                    j++;                                        
                }
            
                j = movimento_maior + 1;
                printf("%s\n", movimento_menor_usavel);   
                
            }
            
        } else{
            printf("Jogo finalizado.");
        }


    }
    

    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
