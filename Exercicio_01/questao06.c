#include <stdio.h>

/*
Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.
*/

void main() {

    float salario, novo;

    printf("Digite o salario (R$): ");
    scanf("%f", &salario);

    novo = (salario * 0.25) + salario;

    printf("O novo salario do trabalhador eh R$%.2f", novo);
}
