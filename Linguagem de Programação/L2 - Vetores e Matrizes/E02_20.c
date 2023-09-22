#include <stdio.h>

int main() {
    int tam = 10;
    int vet[tam];
    int num;

    // Leitura dos 10 valores e armazenamento no vetor
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }

    // Leitura do número a ser buscado
    scanf("%d", &num);
    
    int encontrado = -1; // Inicializa como -1 para indicar que o número não foi encontrado

    for (int i = 0; i < tam; i++) {
        if (vet[i] == num) {
            encontrado = i; 
            break; // Encerra o loop assim que encontrar a primeira ocorrência
        }
    }

    printf("%d", encontrado);
    
    return 0;
}
