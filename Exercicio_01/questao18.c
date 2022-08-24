#include <stdio.h>

/*
Leia um valor em m, calcule e escreva o equivalente em cm.
*/

void main() {

    float m;
    int cm;

    printf("Digite um valor em m: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("O valor em m equivale a %dcm", cm);
}
