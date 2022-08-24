#include <stdio.h>

/*
Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 *  * r3) / 3) ( = 3,14).
*/

void main() {

    float raio, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4 * 3.14 * (raio * raio * raio)) / 3;

    printf("O valor do volume da esfera eh de %.1fm3", volume);
}
