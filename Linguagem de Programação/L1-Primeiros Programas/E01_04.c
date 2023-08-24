#include <stdio.h>

//Faça um programa que apresente os números de 20 a 1 (em ordem decrescente), um número em cada linha.'

int main(void)
{
    int num[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    
    for(int i=19;i>=0;i--){
        printf("%d", num[i]);
        printf("\n");    
        }
      
  return 0;
}
