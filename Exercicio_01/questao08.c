#include <stdio.h>

/*
Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.
*/

void main() {

    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite as notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite os pesos respectivos de cada nota: ");
    scanf("%d %d %d", &peso1, &peso2, &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / peso1 + peso2 + peso3;

    printf("O media ponderada eh de %.1f", media);
}
