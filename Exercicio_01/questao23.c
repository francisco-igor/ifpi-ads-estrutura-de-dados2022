#include <stdio.h>

/*
Leia 3 números, calcule e escreva a média dos números.
*/

void main() {

    float n1, n2, n3, media;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n1, &n1);

    media = (n1 + n2 + n3) / 3;

    printf("A media dos numeros eh %.1f", media);
}
