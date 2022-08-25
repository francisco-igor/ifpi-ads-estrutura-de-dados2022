#include <stdio.h>

/*
Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.
*/

void main() {

    int anos, meses, dias, total;

    printf("Digite uma idade (anos meses dias): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    total = (anos * 365) + (meses * 30) + dias;

    printf("A idade em dias eh %d", total);
}
