#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3
#define CASA 3

void casa_horizontal(int matriz[][COLUNAS], int linha, int coluna_inicial, int tamanho, int nome) {
    for(int h = 0; h < tamanho; h++) {
        if (coluna_inicial + h < COLUNAS) {
            matriz[linha][coluna_inicial + h] = nome;
        }
    }
}

void casa_vertical(int matriz[][COLUNAS], int linha_inicial, int coluna, int tamanho, int nome) {
    for(int v = 0; v < tamanho; v++) {
        if(linha_inicial + v < COLUNAS) {
           matriz[linha_inicial + v][coluna] = nome;
        }
    }
}

void casa_diagonal(int matriz[][COLUNAS], int linha_inicial, int coluna_incial, int tamanho, int nome) {
    for(int d = 0; d < tamanho; d++) {
        if(linha_inicial + d < LINHAS && coluna_incial + d < COLUNAS) {
            matriz[linha_inicial + d][coluna_incial + d] = nome;
        }
    }
}

void casa_diagonalE(int matriz[][COLUNAS], int linha_inicial, int coluna_inicial, int tamanho, int nome) {
    for(int e = 0; e < tamanho; e++) {
        if(coluna_inicial + e < LINHAS && linha_inicial - e >= 0) {
            matriz[coluna_inicial + e][linha_inicial - e] = nome;
        }
    }
}

 int main(){

    int matriz[LINHAS][COLUNAS];
    // int soma = 0;
// inicia a matriz com zero
     for(int i = 0; i < LINHAS; i++) {
        for( int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = 0;
        }
     }

// pocisionar os naivios.
  casa_horizontal(matriz, 1, 3, CASA, NAVIO);// B4
  casa_vertical(matriz, 3, 5, CASA, NAVIO);//D6
  casa_diagonalE(matriz, 4, 4, CASA, NAVIO);//E5
  casa_diagonal(matriz, 2, 7, CASA, NAVIO);//B8

// imprimir o cabeçario.
     printf("    **BATALHA NAVAL.** \n\n");

    printf("   ");
    for(int c = 1; c <= COLUNAS; c++){
        printf("%2d ", c);
    }
      printf("\n");

// TABULEIRO.
    for(int i = 0; i < LINHAS; i++) {
        char letras = 'A' + i;
        printf("%2c ", letras);
       
        for(int j = 0; j < COLUNAS; j++) {
            printf("%2d ", matriz[i][j]);
            // soma;
            // matriz[i][j] = soma;
        }
        printf("\n");
    }

    return 0;
 }


