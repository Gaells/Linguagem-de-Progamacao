/******************************************************************************

E2_11) Fa�a um programa que leia 10 n�meros, armazene-os em um vetor 
e apresente os 5 (cinco) n�meros que est�o nas posi��es �mpares.
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




