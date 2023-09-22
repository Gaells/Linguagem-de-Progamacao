/*
E28) Faça um programa que leia uma string e apresente os símbolos e a frequência (número de ocorrência de cada símbolo na string lida). O programa deverá apresentar um símbolo e a frequência por linha e omitir os símbolos que não ocorram (frequência zero). Considere o intervalo de 32 a 128 da tabela ASCII.
Exemplo
Entrada
ana

Saída
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

