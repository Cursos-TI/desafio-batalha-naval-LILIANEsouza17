#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("DESAFIO BATALHA NAVAL\n");// tema do programa
    printf("\n");
    //CRIAÇÃO DO TABULEIRO 
    #define TAM  10
    int tabuleiro [TAM][TAM]= {0};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    


    //POSIÇÃO DOS NAVIOS NO TABULEIRO COM VALOR FIXO
   
    //COLOCANDO NAVIOS NO TABULEIRO
   
    for(int i = 2; i < 5; i++) { // PRIMEIRO NAVIO: VERTICAL 3 POSIÇÕES NA COLUNA G(ÍNDICE 6),LINHAS 2,3,4
       
        tabuleiro[i][6] = 3;
       
     }
    for (int i = 1; i < 4; i++) { // SEGUNDO NAVIO:HORIZONTAL 3 POSIÇÕES NA LINHA 7(ÍNDICE 6), COLUNAS B,C,D
       
    tabuleiro[6][i] = 3;
      
        
    }
    //EXIBIÇAO TABULEIRO COM LETRAS E NUMERAÇÃO DAS LINHAS
    printf("TABULEIRO BATALHA NAVAL: \n");

    printf("     ");// EXIBIR AS LETRAS DE A-J
    for ( int c = 0; c < TAM; c++){
       printf(" %c", coluna[c]); 
    }
    printf("\n");

    
    

    for (int i = 0; i < TAM; i++){
        printf(" %2d  ", i + 1);
        for(int j = 0; j < TAM; j++){
        printf(" %d", tabuleiro[i][j]); 

        }
        printf("\n");
    }
    return 0;
}
    

    


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

 
    

  
    
