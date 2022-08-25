#include <stdio.h>

/*
Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias.
*/

void main() {

    int d, anos, meses, dias;

    printf("Digite uma idade em dias: ");
    scanf("%d", &d);

    anos = d / 365;
    meses = (d % 365) / 30;
    dias = (d % 365) % 30;

    printf("Corresponde a %d ano(s), %d mes(es) e %d dia(s)", anos, meses, dias);
}
