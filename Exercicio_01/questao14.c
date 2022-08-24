#include <stdio.h>

/*
Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5).
*/

void main() {

    float temp, fahr;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &temp);

    fahr = (9 * temp + 160) / 5;

    printf("A temperatura eh de %.1f oF", fahr);
}
