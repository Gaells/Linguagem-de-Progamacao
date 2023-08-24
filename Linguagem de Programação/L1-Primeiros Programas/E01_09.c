#include <stdio.h>

//Faça um programa que leia um número N e apresente todos os divisores de N (do menor para o maior, de 1 a N-1).

int main() {
    int maior, num1, mult = 1;

    scanf("%d", &num1);
    
   
    
    for(int i = 1; i < num1-1 ; i++){
        if(num1 % i == 0) {
            printf("%d\n", i);
        }    
        
    }
    
    return 0;
}
