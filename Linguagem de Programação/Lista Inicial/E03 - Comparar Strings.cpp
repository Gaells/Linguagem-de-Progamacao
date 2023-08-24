#include <stdio.h>

/*
Faça um programa que leia duas strings, compare as strings e apresente na tela os valores "0" se forem iguais, 
"-1" se str1 for menor que str2, caso contrário "1".

Não deverá utilizar as funções da string.h (strcmp, stricmp, strncmp etc)

Atenção não apresente nada diferente disso.
*/

int compareStrings(const char* str1, const char* str2) {
    int i = 0;
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100];
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    int result = compareStrings(str1, str2);
    
    if (result == 0) {
        printf("0");
    } else if (result > 0) {
        printf("1");
    } else {
        printf("-1");
    }
}

