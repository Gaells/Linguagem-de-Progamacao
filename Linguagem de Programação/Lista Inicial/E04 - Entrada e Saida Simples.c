#include <stdio.h>
/*
Fa�a um programa em C que leia nessa ordem:
a) um valor inteiro e apresente-o (scanf com %d).
b) uma tecla e apresente o c�digo ASCII, um espa�o e o s�mbolo correspondente 
(use as fun��es para ler teclas - getch/getchar)
c) um ponto flutuante (scanf %f) e apresente com %.2f - veja o ponto antes do 2f)
d) leia um texto (char texto[100]) usando a fun��o gets(texto) e apresente-o com printf usando o %s.

Ap�s cada sa�da dever� conter uma quebra de linha (\n) e n�o dever� ter mais nenhuma outra informa��o, 
seja para orientar a entrada ou a sa�da.
*/

int main() {
    int a;
    char b;
    float c;
    char texto[100];
    
    scanf("%d\n",&a);
	b=getchar();
	scanf("%f\n",&c);
	gets(texto);
    
    printf("%d\n", a);
    printf("%d %c\n", b, b);
    printf("%.2f\n", c);
    printf("%s\n", texto);

    return 0;
}
