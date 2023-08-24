#include <stdio.h>

/* 
Faça um programa que leia um número e apresente o número lido e a seguir se ele é "par" ou "impar" (sem acento).
*/

int main(){
    int a;
    
    scanf("%d", &a);
    
    if(a%2 == 0){
        printf("%d par", a);
    } else {
        printf("%d impar", a);
    }
    
    return 0;
}
