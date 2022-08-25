#include <stdio.h>

/*
Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.
*/

void main() {

    int m, anos, meses;

    printf("Digite um numero de meses: ");
    scanf("%d", &m);

    anos = m / 12;
    meses = m % 12;

    printf("Corresponde a %d ano(s) e %d mes(es)", anos, meses);   
}
