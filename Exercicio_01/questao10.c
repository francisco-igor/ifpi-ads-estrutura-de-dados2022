#include <stdio.h>

/*
Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2).
*/

void main() {

    float lado, area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;

    printf("O valor da area do quadrado eh de %.1fm2", area);
}
