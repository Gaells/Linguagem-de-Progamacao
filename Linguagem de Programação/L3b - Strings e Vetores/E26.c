/*
E26) Fa�a um programa que leia uma String e apresente todos os sufixos da string.
Exemplo 1:
Entrada:
pedra
sa�da:
pedra
edra
dra
ra
a
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100]; 

    scanf("%s", str);

    int strLength = strlen(str);

    for (int i = 0; i < strLength; i++) {
        for (int j = i; j < strLength; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

