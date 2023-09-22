/******************************************************************************

E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.
Exemplo de entrada
1 2 3 4
5 6 7 8
9 10 11 12
Saída
15
18
21
24

*******************************************************************************/
#include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 4;
    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < colunas; j++) {
        int soma = 0;
        for (int i = 0; i < linhas; i++) {
            soma += matriz[i][j];
        }
        printf("%d\n", soma);
    }

    return 0;
}


