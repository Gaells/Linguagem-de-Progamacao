#include <stdio.h>

//Faça um programa que apresente os números de pares de 0 a 20, cada número em uma linha.

int main(void)
{
    int num[21] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    
    for(int i=0;i<21;i++){
        if(num[i]%2 == 0){
            printf("%d", num[i]);
            printf("\n");    
        }
      
  }    
  return 0;
}
