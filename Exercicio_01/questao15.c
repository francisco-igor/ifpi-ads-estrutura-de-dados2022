#include <stdio.h>

/*
Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).
*/

void main() {

    float temp, celsius;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &temp);

    celsius = (5 * temp - 160) / 9;

    printf("A temperatura eh de %.1f oC", celsius);
}
