#include <stdio.h>

//Fa�a um programa que leia 10 n�meros inteiros e apresente o maior (n�o utilize vetor/matriz).

int main()
{
    int prim, maior, num;
    scanf("%d", &prim);
    maior = prim;
    
    for(int i=1;i<10;i++){
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("%d", maior);
    
    return 0;
}
