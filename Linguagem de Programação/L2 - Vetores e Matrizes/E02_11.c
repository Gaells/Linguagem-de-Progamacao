/******************************************************************************

E2_11) Faça um programa que leia 10 números, armazene-os em um vetor 
e apresente os 5 (cinco) números que estão nas posições ímpares.
*******************************************************************************/
#include <stdio.h>

int main() {
    int tam = 10;
    int vet[tam];
    
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    
    for(int i = 0; i < tam; i++){  
        if(i%2 == 1){
            printf("%d\n", vet[i]);   
        }
    }
    
    return 0;
}




