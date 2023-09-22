/*
E27) Faça um programa que leia uma String e apresente todos os sufixos da string em ordem léxica.
Exemplo:

Entrada:
Banana

Saída:

a
ana
anana
banana
na
nana
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(void) {
    char str[100]; 

    scanf("%s", str);

    int strLength = strlen(str);

    char *sufixos[strLength];

    for (int i = 0; i < strLength; i++) {
        sufixos[i] = &str[i];
    }

    qsort(sufixos, strLength, sizeof(char *), compare);

    for (int i = 0; i < strLength; i++) {
        printf("%s\n", sufixos[i]);
    }

    return 0;
}

