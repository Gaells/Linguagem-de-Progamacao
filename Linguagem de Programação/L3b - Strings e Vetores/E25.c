/*
E25) Fa�a um programa que leia uma String e apresente todos os prefixos da string.
Exemplo 1:
Entrada:
pedra
sa�da:
p
pe
ped
pedr
pedra
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100]; 

    scanf("%s", str);

    int strLength = strlen(str);

    for (int i = 1; i <= strLength; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

