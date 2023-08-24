#include <stdio.h>

//Faça um programa que leia dois números A e B e apresente o maior divisor comum dos dois números.

int main() {
    int maior, v1, v2, mult = 1;

    scanf("%d", &v1);
    scanf("%d", &v2);
    
    if(v1 > v2) {
        maior = v1;
    } else {
        maior = v2;
    }
    
    for(int i = maior; i>0; i--){
        
        if(v1%2 == 0 && v2%2 == 0) {
            mult *= 2;
            v1 = v1/2;
            v2 = v2/2;
        } else if(v1%3 == 0 && v2%3 == 0) {
            mult *= 3;
            v2 = v2/3;
            v1 = v1/3;
        } else if(v1%5 == 0 && v2%5 == 0) {
            mult *= 5;
            v2 = v2/5;
            v1 = v1/5;
        }    
    }
    printf("%d", mult);
    
    return 0;
}
