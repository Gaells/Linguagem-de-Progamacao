/******************************************************************************

E2_18) Fa�a um programa que leia 10 valores e armazene-os em um vetor. 
Na sequ�ncia, apresente os valores contidos no vetor, onde a diferen�a 
entre os valores contidos em dois elementos sucessivos n�o seja maior do que um.
Entrada
1
3
4
8
9
2
4
6
8
10
Sa�da
3 4
8 9

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam = 4;
    int vet[tam];
    
    for(int i=0; i<tam;i++){
        scanf("%d", &vet[i]);
    }
    
    for(int i=0; i<tam;i++){
        if(vet[i] - vet[i+1] ==1 || vet[i] - vet[i+1] ==-1){
            printf("%d %d\n", vet[i], vet[i+1]);
        }
    }

    return 0;
}

