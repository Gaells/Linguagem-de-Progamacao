#include <stdio.h>

//Faça um programa que leia uma lista de números inteiros terminados por 0, 
//para cada número lido o programa deve informar o número e se o número é par ou ímpar. 
//Não utilize vetores/matrizes.

//mostre apenas "par" ou "impar" (sem acentos).

int main() {
    int numero;

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero % 2 == 0) {
                printf("%d par\n", numero);
            } else {
                printf("%d impar\n", numero);
            }
        }
    } while (numero != 0);

    return 0;
}
