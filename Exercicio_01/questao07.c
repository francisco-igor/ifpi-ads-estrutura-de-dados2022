#include <stdio.h>

/*
Leia um valor em real (R$), calcule e escreva 70% deste valor.
*/

void main() {

    float valor;

    printf("Digite o valor (R$): ");
    scanf("%f", &valor);

    valor = valor * 0.70;

    printf("O valor eh R$%.2f", valor);
}
