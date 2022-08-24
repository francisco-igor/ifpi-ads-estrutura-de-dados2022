#include <stdio.h>

/*
Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2).
*/

void main() {

    float b, h, area;

    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &b);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &h);
    
    area = (b * h) / 2;

    printf("O valor da area do triangulo eh de %.1fm2", area);
}
