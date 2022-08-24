#include <stdio.h>

/*
Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 *  *r).
*/

void main() {

    float raio, comprimento;

    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);
    
    comprimento = 2 * 3.14 * raio;

    printf("O valor do comprimento da circunferencia eh de %.1fm", comprimento);
}
