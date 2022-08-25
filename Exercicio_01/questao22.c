#include <stdio.h>

/*
Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele
corresponde.
*/

void main() {

    int m, dias, horas, minutos;

    printf("Digite um valor em minutos: ");
    scanf("%d", &m);

    dias = m / 1440;
    horas = (m % 1440) / 60;
    minutos = (m % 1440) % 60;

    printf("Corresponde a %d dia(s), %d hora(s) e %d minuto(s)", dias, horas, minutos);
}
