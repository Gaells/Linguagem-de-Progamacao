#include <stdio.h>

//Fa�a um programa que leia uma lista de n�meros inteiros terminados por 0, 
//para cada n�mero lido o programa deve informar o n�mero e se o n�mero � par ou �mpar. 
//N�o utilize vetores/matrizes.

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
