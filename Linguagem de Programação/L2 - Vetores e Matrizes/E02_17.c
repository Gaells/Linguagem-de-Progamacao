#include <stdio.h>

int main() {
    int tam = 10;
    int vetor[tam];
    
    // Leia 10 números e armazene-os no vetor
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Ordene o vetor em ordem decrescente (do maior para o menor)
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vetor[i] < vetor[j]) {
                // Troque os elementos vetor[i] e vetor[j]
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < tam; i++) {
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}

