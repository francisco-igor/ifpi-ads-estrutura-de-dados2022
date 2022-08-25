#include <stdio.h>

/*
Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior ou igual a cada
uma das duas prestações; estas devem ser iguais, inteiras e as maiores possíveis. Por exemplo, se o valor da
mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for
R$ 302,00, a entrada é de R$ 102,00 e as duas prestações são iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e escreva o valor da entrada e das duas prestações, conforme as regras acima.
*/

void main() {

    int inteiro;
    float valor, prestacao1, prestacao2, entrada;

    printf("Qual o preco do produto (R$): ");
    scanf("%f", &valor);

    inteiro = valor / 3;

    prestacao1 = inteiro;

    prestacao2 = prestacao1;

    entrada = valor - (prestacao1 + prestacao2);

    printf("\nValor da Entrada: R$%.2f", entrada);
    printf("\nValor da 1a Prestacao: R$%.2f", prestacao1);
    printf("\nValor da 2a Prestacao: R$%.2f\n", prestacao2);
}
