/******************************************************************************

E2_12) Fa�a um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal principal.

Exemplo:
Entrada
1 2 3
4 5 6
7 8 9
Sa�da
1
5
9

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lin = 3;
    int col = 3;   
    int vet[lin][col];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &vet[i][j]);
        }
    }
    
    for (int i = 0; i < lin; i++) {
        printf("%d\n", vet[i][i]);
    }
    
    

    return 0;
}

