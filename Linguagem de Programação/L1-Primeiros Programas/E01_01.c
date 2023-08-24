#include <stdio.h>

// Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira 
// e a parte fracionária.

int main() {
    
    float num;
    
    scanf("%f", &num);
    
    int parteInt = (int)num;
    double parteDec = num - parteInt;
    
    printf("%.f\n", num);
    printf("%f", parteDec);
    
    return 0;
}
