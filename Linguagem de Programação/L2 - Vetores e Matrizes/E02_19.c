/******************************************************************************
E2 19)
Fa�a um programa que leia 10 valores e armazene-os em um vetor. Na sequ�ncia, 
apresente os valores contidos no vetor que sejam a moda do conjunto (os valores com maior ocorr�ncia no vetor. 
No caso de empate, apresente os valores com igual frequ�ncia).

*******************************************************************************/
#include <stdio.h>

int main() {
    int tam = 10;
    int vetor[tam];
    int frequencia[tam];
    int moda[tam];
    int maiorFrequencia = 0;
    int count = 0;

    // Leitura dos valores e inicializa��o do vetor frequencia
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
        frequencia[i] = 0;
    }

    // C�lculo da frequ�ncia de cada valor no vetor
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (vetor[i] == vetor[j]) {
                frequencia[i]++;
            }
        }
    }

    // Encontrar a maior frequ�ncia
    for (int i = 0; i < tam; i++) {
        if (frequencia[i] > maiorFrequencia) {
            maiorFrequencia = frequencia[i];
        }
    }

    // Encontrar os valores que t�m a maior frequ�ncia
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
