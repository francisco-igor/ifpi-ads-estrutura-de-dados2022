#include <stdio.h>

/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os
impostos de 45%, escreva um programa que leia o custo de fábrica de um carro e escreva o custo ao
consumidor.
*/

void main() {

    float fabrica, distribuidor = 0.28, impostos = 0.45, consumidor;

    printf("Digite o custo de fabrica do carro (R$): ");
    scanf("%f", &fabrica);

    consumidor = fabrica + (fabrica * distribuidor) + (fabrica * impostos);

    printf("O custo ao consumidor eh de R$%.2f", consumidor);
}
