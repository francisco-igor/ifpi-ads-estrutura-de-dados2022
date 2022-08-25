#include <stdio.h>

/*
Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o
numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível
critério seria o da "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem
distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de notas de R$ 50, de R$ 20,
de R$ 10, de R$ 5 e de R$ 2, para uma quantia solicitada de R$ 87, o programa deveria indicar uma nota de
R$ 50, uma nota de R$20,00, uma nota de R$ 10, uma nota de R$ 5 e uma nota de R$ 2. Escreva um programa
que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da
distribuição ótima.
*/

void main() {

    int quantia, duzentos, cem, cinquenta, vinte, dez, cinco, dois;

    printf("Quantidade a ser sacada: ");
    scanf("%d", &quantia);

    duzentos = quantia / 200;

    cem = (quantia % 200) / 100;

    cinquenta = ((quantia % 200) % 100) / 50;

    vinte = (((quantia % 200) % 100) % 50) / 20;

    dez = ((((quantia % 200) % 100) % 50) % 20) / 10;

    cinco = (((((quantia % 200) % 100) % 50) % 20) % 10) / 5;

    dois = ((((((quantia % 200) % 100) % 50) % 20) % 10) % 5) / 2;

    printf("%d notas de duzentos\n", duzentos);
    printf("%d notas de cem\n", cem);
    printf("%d notas de cinquenta\n", cinquenta);
    printf("%d notas de vinte\n", vinte);
    printf("%d notas de dez\n", dez);
    printf("%d notas de cinco\n", cinco);
    printf("%d notas de dois", dois);
}
