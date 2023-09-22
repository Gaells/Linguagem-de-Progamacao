/******************************************************************************

E2_15) Fa�a um programa que leia uma matriz de inteiros de 3x4 e apresente os elementos em que a soma dos �ndices i e j sejam pares. Respeite a ordem de apresenta��o linha,coluna.

a soma de cada coluna. A sa�da dever� ter um n�mero por linha.
Exemplo de entrada
1 2 3 4
5 6 7 8
9 10 11 12
Sa�da
1
3
6
8
9
11

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

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if ((i + j) % 2 == 0) {
                printf("%d\n", matriz[i][j]);
            }
        }
    }

    return 0;
}



