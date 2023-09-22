/*
E30) Fa�a um programa que leia 10 nomes e apresente os �ndices do vetor de nomes lidos, de forma, que se forem utilizados na apresenta��o, os nomes estar�o ordenados. Observe que o vetor de nomes n�o sofre altera��o.
Exemplo:
0 - Pedro
1 - Ana
2 - Jo�o
3 � Maria
Sa�da ao usar nomes[�ndices[i]] para i variando de 0 a 3:
1
2
3
0
*/

#include <stdio.h>
#include <string.h>

#define MAX_NOMES 10
#define MAX_TAM_NOME 50

void ordenarIndices(int indices[], char nomes[][MAX_TAM_NOME], int n) {
    for (int i = 0; i < n; i++) {
        indices[i] = i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(nomes[indices[j]], nomes[indices[j + 1]]) > 0) {
             
                int temp = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    char nomes[MAX_NOMES][MAX_TAM_NOME];
    int indices[MAX_NOMES];

    for (int i = 0; i < MAX_NOMES; i++) {
        scanf("%s", nomes[i]);
    }

    ordenarIndices(indices, nomes, MAX_NOMES);

    for (int i = 0; i < MAX_NOMES; i++) {
        printf("%d\n", indices[i]);
    }

    return 0;
}

