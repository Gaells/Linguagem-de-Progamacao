/*
E31) Faça um programa que leia uma frase e apresente o número de palavras lidas. 
Considere todo símbolo não alfabético ou não numérico como delimitador.
Exemplo:
Entrada
A casa das 7 irmãs.
Saída:
5
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_FRASE 1000

bool isAlphanumeric(char c) {
    return isalpha(c) || isdigit(c);
}

int contarPalavras(const char *frase) {
    int contador = 0;
    bool dentroDaPalavra = false;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (isAlphanumeric(frase[i])) {
            if (!dentroDaPalavra) {
                contador++;
                dentroDaPalavra = true;
            }
        } else {
            dentroDaPalavra = false;
        }
    }

    return contador;
}

int main(void) {
    char frase[MAX_FRASE];

    gets(frase);

    int numPalavras = contarPalavras(frase);

    printf("%d\n", numPalavras);

    return 0;
}

