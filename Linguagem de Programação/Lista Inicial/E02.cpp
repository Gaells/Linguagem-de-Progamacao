#include <stdio.h>

/* 
Fa�a um programa que leia um n�mero e apresente o n�mero lido e a seguir se ele � "par" ou "impar" (sem acento).
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
