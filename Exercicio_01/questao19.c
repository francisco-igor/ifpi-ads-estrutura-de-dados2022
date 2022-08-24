#include <stdio.h>

/*
Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.
*/

void main() {

    int m, km, metros;

    printf("Digite um valor em m: ");
    scanf("%d", &m);

    km = m / 1000;
    metros = m % 1000;

    printf("Corresponde a %dKm e %dm", km, metros);
}
