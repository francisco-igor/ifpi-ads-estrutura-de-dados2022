#include <stdio.h>

/*
Leia um valor em kg (quilograma), calcule e escreva o equivalente em g(grama).
*/

void main() {

    float kg;
    int g;

    printf("Digite um valor em Kg: ");
    scanf("%f", &kg);

    g = kg * 1000;

    printf("O valor em Kg equivale a %dg", g);
}
