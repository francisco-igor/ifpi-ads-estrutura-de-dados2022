#include <stdio.h>

/*L
Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura).
*/

void main() {

    float b, h, area;

    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &b);

    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &h);
    
    area = b * h;

    printf("O valor da area do retangulo eh de %.1fm2", area);
}
