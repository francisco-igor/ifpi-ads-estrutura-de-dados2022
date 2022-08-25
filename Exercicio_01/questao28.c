#include <stdio.h>

/*
Sabendo que latão é constituído de 70% de cobre e 30% de zinco, escreva um programa que calcule a
quantidade de cada um desses componentes para se obter certa quantidade de latão (em kg), informada pelo
usuário.
*/

void main() {

    float latao, cobre, zinco;

    printf("Digite a quantidade de latao (kg): ");
    scanf("%f", &latao);

    cobre = latao * 0.70;
    zinco = latao * 0.30;

    printf("Serao necessarios %.1fkg de cobre e %.1fkg de zinco para obter %.1fkg de latao.", cobre, zinco, latao);
}
