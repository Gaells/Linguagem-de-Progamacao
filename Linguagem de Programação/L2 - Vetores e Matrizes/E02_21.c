/******************************************************************************

E2_21) Fa�a um programa que leia 10 valores e armazene-os em um vetor. 
Na sequ�ncia, leia um n�mero e procure esse n�mero no vetor. 
E apresente o �ndice de todas as ocorr�ncias localizadas, caso contr�rio -1

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam = 10;
    int vet[tam];
    int num;
    
    for(int i=0; i<tam;i++) {
        scanf("%d", &vet[i]);
    }
    
    scanf("%d", &num);
    int encontrou=0;
    
    for(int i=0; i <tam; i++){
        if(vet[i] == num){
            printf("%d\n", i);
            encontrou = 1;
        }
    }
    
    if(!encontrou) {
        printf("-1\n");
    }

    return 0;
}

