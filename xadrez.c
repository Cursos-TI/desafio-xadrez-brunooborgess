#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int numero;

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    printf("---- Movimentação de peças ----\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    do {
        printf("Digite o numero de casas para o Bispo andar:\n");
        scanf("%d", &numero);

        if (numero < 5 || numero > 5) {
            printf("Numero de casas incorreto!\n");
        }
    } while (numero != 5); // Continua pedindo até que o usuário digite 5

    printf("Bispo andou %d casas para diagonal superior direita\n", numero);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    do {
        printf("Digite o numero de casas para a Torre andar:\n");
        scanf("%d", &numero);

        if (numero < 5 || numero > 5) {
            printf("Numero de casas incorreto!\n");
        }
    } while (numero != 5); // Continua pedindo até que o usuário digite 5

    printf("Torre andou %d casas para a direita\n", numero);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    do {
        printf("Digite o numero de casas para a Rainha andar:\n");
        scanf("%d", &numero);

        if (numero < 8 || numero > 8) {
            printf("Numero de casas incorreto!\n");
        }
    } while (numero != 8); // Continua pedindo até que o usuário digite 8

    printf("Rainha andou %d casas para a esquerda\n", numero);

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