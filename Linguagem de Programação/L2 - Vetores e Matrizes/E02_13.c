/******************************************************************************

E2_13) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal secundária.
Exemplo:
Entrada
1 2 3
4 5 6
7 8 9
Saída
3
5
7

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lin = 3;
    int col = 3;   
    int vet[lin][col];
    int i;

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &vet[i][j]);
        }
    }
    
    for (int i = 0; i < lin; i++) {
        printf("%d\n", vet[i][lin - 1 - i]);
    }
    
    

    return 0;
}

