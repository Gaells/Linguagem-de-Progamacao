/******************************************************************************
E2 19)
Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, 
apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorrência no vetor. 
No caso de empate, apresente os valores com igual frequência).

*******************************************************************************/
#include <stdio.h>

int main() {
    int tam = 10;
    int vetor[tam];
    int frequencia[tam];
    int moda[tam];
    int maiorFrequencia = 0;
    int count = 0;

    // Leitura dos valores e inicialização do vetor frequencia
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
        frequencia[i] = 0;
    }

    // Cálculo da frequência de cada valor no vetor
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (vetor[i] == vetor[j]) {
                frequencia[i]++;
            }
        }
    }

    // Encontrar a maior frequência
    for (int i = 0; i < tam; i++) {
        if (frequencia[i] > maiorFrequencia) {
            maiorFrequencia = frequencia[i];
        }
    }

    // Encontrar os valores que têm a maior frequência
    for (int i = 0; i < tam; i++) {
        if (frequencia[i] == maiorFrequencia) {
            int repetido = 0;
            for (int j = 0; j < count; j++) {
                if (vetor[i] == moda[j]) {
                    repetido = 1;
                    break;
                }
            }
            if (!repetido) {
                moda[count++] = vetor[i];
            }
        }
    }

    // Exibir os valores moda
    for (int i = 0; i < count; i++) {
        printf("%d\n", moda[i]);
    }

    return 0;
}
