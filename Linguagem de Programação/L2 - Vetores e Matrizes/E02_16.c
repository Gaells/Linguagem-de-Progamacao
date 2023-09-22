/******************************************************************************
E2_16) Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, 
leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e 
apresente os valores lidos (vetor) que estejam entre os índices a e b.
Entrada
1 2 3 4 5 6 7 8 9 10
3 5
saída
4
5
6
*******************************************************************************/
#include <stdio.h>

int main() {
    int tam = 10;
    int vet[tam];

    // Lê os 10 valores e armazena no vetor
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    // Verifica se a e b estão dentro do intervalo [0, 9]
    if (a >= 0 && a < tam && b >= 0 && b < tam) {
        // Imprime os valores no intervalo [a, b]
        for (int i = a; i <= b; i++) {
            printf("%d\n", vet[i]);
        }
    } else {
        printf("Os índices a e b devem estar entre 0 e 9.\n");
    }

    return 0;
}




