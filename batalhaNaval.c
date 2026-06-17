

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

/*int main() {
    // Nível Novato - Posicionamento dos Navios
    printf("Bem vindo ao jogo de Batalha Naval! \n");
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[10][10] = {0}; //todas as posições que começa em 0
    int navioH[3] = {3, 3, 3}; //navio na horizontal
    int navioV[3] = {3, 3, 3}; //navio na vertical
    // navio na posição horizontal
    int linhaH = 2, colunaH = 3; //posição inicial
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }
    //navio na posição vertical
    int linhaV = 6, colunaV = 7; //posição inicial
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }
    if (colunaH + 3 > 10) {
        printf("Navio horizontal fora dos limites!\n");
    }
    if (linhaV + 3 > 10) {
        printf("Navio vertical fora dos limites!\n");
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }*/

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
/*#include <stdio.h>
    //Definido as constantes
    #define LINHAS 10
    #define COLUNAS 10
    #define NAVIO 3

    //declarando as variáveis
    int main(){
        int tabuleiro [LINHAS] [COLUNAS] = {0};
        printf("Bem vindo ao Batalha Naval - Nivel Aventureiro!\n\n");
    //Navio na horizontal
        int linhaHorizontal = 4, colunaHorizontal = 1; //variável
    //condição 
        if (colunaHorizontal + NAVIO < COLUNAS){ 
            for(int i = 0; i < NAVIO; i++){
                if(tabuleiro[linhaHorizontal][colunaHorizontal + i] == 0){
                    tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
                }
            }
        }
    //Navio na vertical 
        int linhaVertical = 5, colunaVertical = 5;
    //condição
        if (linhaVertical + NAVIO < LINHAS){
            for (int i = 0; i < NAVIO; i++){
                if (tabuleiro[linhaVertical + i][colunaVertical]== 0){
                    tabuleiro[linhaHorizontal + i][colunaVertical] = 3;
                }
            }
        }

    //Diagonal Princiapl
        int linhaDiagonal1 = 0, colunaDiagonal1 = 0;
    //condição
        if (linhaDiagonal1 + NAVIO <= LINHAS && colunaDiagonal1 + NAVIO <= COLUNAS ){
            for (int i = 0; i < NAVIO; i++){
                if(tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] == 0){
                    tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3;
                }
            }
        }

    //Diagonal Secundária 
        int linhaDiagonal2 = 0, colunaDiagonal2 = 9;
    //condição
        if (linhaDiagonal2 + NAVIO <= LINHAS && colunaDiagonal2 - (NAVIO -1) >= 0){
            for (int i = 0; i < NAVIO; i++){
                if (tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] == 0){
                    tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = 3;
                }
            }
        }
    //Exibindo resultado
        printf("Tabuleido Batalha Naval\n ");
        for(int i = 0; i < LINHAS; i++){
            for(int j = 0; j < COLUNAS; j++){
                printf(" %d ", tabuleiro[i][j]);
            }
            printf(" \n ");
        }
           return 0;
            
    }*/


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

 #include <stdio.h>
 #include <stdlib.h>
 #define LINHAS 10
 #define COLUNAS 10
 #define NAVIO 3
 #define HABILIDADES 5
 #define TAM_HABILIDADE 5

 int main() {
    int tabuleiros[LINHAS][COLUNAS] = {0};

    printf("Bem vindo ao jogo Batalha Naval\n ");
    

    //posicionameto do navio
    for(int i = 0; i < NAVIO; i++){
        tabuleiros[2][1 + i] = 3; // navio horizontal
        tabuleiros[5 +1][7] = 3; //navio vertical
    }

    //matriz de habilidades
    int cone[TAM_HABILIDADE][TAM_HABILIDADE] = {0};
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE] = {0};
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE] = {0};

    //forma de cone no jogo

    for(int i = 0; i < TAM_HABILIDADE; i++){
        for(int j = 0; j < TAM_HABILIDADE; j++){
            if(j >= (TAM_HABILIDADE/2 - i) && j <= (TAM_HABILIDADE/2 + i)){
                cone[i][j] = 1;
            }
        }
    }

    //forma da cruz no jogo

    for(int i = 0; i < TAM_HABILIDADE; i++){
        for(int j = 0; j < TAM_HABILIDADE; j++){
            if(i == TAM_HABILIDADE/2 || j == TAM_HABILIDADE/2){
                cruz [i][j] = 1;
            }
        }
    }

    //forma de octeadro no jogo
    for(int i = 0; i < TAM_HABILIDADE; i++){
        for(int j = 0; j < TAM_HABILIDADE; j++){
            if (abs(i - TAM_HABILIDADE/2) + abs(j - TAM_HABILIDADE/2) <= TAM_HABILIDADE/2)
            {
                octaedro[i][j] = 1;
            }
            
        }
    }

    //habilidade no tabuleiro
    int origem_cone_linha = 1, origem_cone_coluna = 1;
    int origem_cruz_linha = 6, origem_cruz_coluna = 6;
    int origem_octeadro_linha = 4, origem_octeadro_coluna = 4;

    // habilidade cone

    for(int i = 0; i < TAM_HABILIDADE; i++){
        for(int j = 0; j < TAM_HABILIDADE; j++){
            int linha = origem_cone_linha + i;    // calcula a posição no tabuleiro
            int coluna = origem_cone_coluna + j;
            if(linha >= 0 && linha < LINHAS && coluna >= 0 && coluna < COLUNAS){
                if(cone[i][j] == 1 && tabuleiros[linha][coluna] == 0){
                    tabuleiros[linha][coluna] = HABILIDADES;  // marca as áreas afetadas
                }
            }
        }
    }
    
    //habilidade cruz

    for(int i = 0; i < TAM_HABILIDADE; i++){
        for(int j = 0; j < TAM_HABILIDADE; j++){
            int linha = origem_cruz_linha + i - TAM_HABILIDADE/2; //centralizando a cruz no tabuleiro
            int coluna = origem_cruz_coluna + i - TAM_HABILIDADE/2; 
            if(linha >= 0 && linha < LINHAS && coluna >= 0 && coluna < COLUNAS){
                if(cruz[i][j] == 1 && tabuleiros[linha][coluna] == 0){
                    tabuleiros[linha][coluna] = HABILIDADES;
                }
            }
        }
    }

    //habilidade octeadro
    for(int i = 0; i < TAM_HABILIDADE; i++){
        for(int j = 0; j < TAM_HABILIDADE; j++){
            int linha = origem_octeadro_linha + i - TAM_HABILIDADE/2;
            int coluna = origem_octeadro_coluna + j - TAM_HABILIDADE/2;
            if(linha >= 0 && linha < LINHAS && coluna >= 0 && coluna < COLUNAS){
                if(octaedro[i][j] == 1 && tabuleiros[linha][coluna] == 0){
                    tabuleiros[linha][coluna] = HABILIDADES;
                }
            }
        }
    }

    //exibindo resultado

    printf("\nTabuleiro\n\n");

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if(tabuleiros[i][j] == 0){
                printf(" 0 ");
            }else if (tabuleiros[i][j] == 3){
                printf(" 3 ");
            }else if( tabuleiros[i][j] == 5){
                printf(" 5 ");
            }
        }
        printf("\n");
    }

 }