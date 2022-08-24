#include <stdio.h>

/*
Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: num = 532 ; inverso =235)
*/

void main() {
    
    int num, centena, dezena, unidade, inverso;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);

    centena = (num / 100);
    dezena = (num % 100) / 10;
    unidade = (num % 10);

    inverso = unidade * 100 + dezena * 10 + centena * 1;

    printf("%d", inverso);
}
