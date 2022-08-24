#include <stdio.h>

/*
Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele
corresponde.
*/

void main() {

    int h, semanas, dias, horas;

    printf("Digite um valor em horas: ");
    scanf("%d", &h);

    semanas = h / 168;
    dias = (h % 168) / 24;
    horas = (h % 168) % 24;

    printf("Corresponde a %d semanas, %d dias e %d horas", semanas, dias, horas);
}
