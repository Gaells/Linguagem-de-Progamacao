/*
E29) Faça um programa que leia duas Strings, verifique se elas formam anagramas, ignorando variação de caixa e espaços em brancos e apresente: “Formam anagramas” ou “Nao formam anagramas”
Exemplo:
Entrada 1
roma
amor
Saída:
Formam anagramas

Entrada 2
Casa
Asa
Saída:
Nao formam anagramas
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void removeSpaces(char *str) {
    int len = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (!isspace(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

// Função para verificar se duas strings são anagramas
bool areAnagrams(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Se os comprimentos não forem iguais, não podem ser anagramas
    if (len1 != len2) {
        return false;
    }

    char normalizedStr1[100];
    char normalizedStr2[100];
    strcpy(normalizedStr1, str1);
    strcpy(normalizedStr2, str2);
    removeSpaces(normalizedStr1);
    removeSpaces(normalizedStr2);
    for (int i = 0; normalizedStr1[i]; i++) {
        normalizedStr1[i] = tolower(normalizedStr1[i]);
    }
    for (int i = 0; normalizedStr2[i]; i++) {
        normalizedStr2[i] = tolower(normalizedStr2[i]);
    }

    int i, j;
    char temp;
    for (i = 0; i < len1 - 1; i++) {
        for (j = i + 1; j < len1; j++) {
            if (normalizedStr1[i] > normalizedStr1[j]) {
                temp = normalizedStr1[i];
                normalizedStr1[i] = normalizedStr1[j];
                normalizedStr1[j] = temp;
            }
            if (normalizedStr2[i] > normalizedStr2[j]) {
                temp = normalizedStr2[i];
                normalizedStr2[i] = normalizedStr2[j];
                normalizedStr2[j] = temp;
            }
        }
    }

    return strcmp(normalizedStr1, normalizedStr2) == 0;
}

int main(void) {
    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Formam anagramas\n");
    } else {
        printf("Nao formam anagramas\n");
    }

    return 0;
}

