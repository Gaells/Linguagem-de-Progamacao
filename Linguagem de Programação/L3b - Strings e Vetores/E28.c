/*
E28) Fa�a um programa que leia uma string e apresente os s�mbolos e a frequ�ncia (n�mero de ocorr�ncia de cada s�mbolo na string lida). O programa dever� apresentar um s�mbolo e a frequ�ncia por linha e omitir os s�mbolos que n�o ocorram (frequ�ncia zero). Considere o intervalo de 32 a 128 da tabela ASCII.
Exemplo
Entrada
ana

Sa�da
a 2
n 1
*/

#include <stdio.h>

int main(void) {
    char str[100];

    scanf("%s", str);

    int ocorrencias[96] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        int ascii = (int)str[i];
        if (ascii >= 32 && ascii <= 127) {
            ocorrencias[ascii - 32]++;
        }
    }

    for (int i = 0; i < 96; i++) {
        if (ocorrencias[i] > 0) {
            printf("%c %d\n", (char)(i + 32), ocorrencias[i]);
        }
    }

    return 0;
}

