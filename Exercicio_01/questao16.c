#include <stdio.h>

/*
Leia um valor em km, calcule e escreva o equivalente em m.
*/

void main() {

    float km;
    int m;

    printf("Digite um valor em Km: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("O valor em Km equivale a %dm", m);
}
