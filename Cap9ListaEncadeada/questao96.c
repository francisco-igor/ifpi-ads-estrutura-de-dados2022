#include "../lista.h"

void substitui(int x, int y, Lista L) {
   int cont = 0;

    while (L != NULL) {
        if (x == L -> item) {
            L -> item = y;
            cont++;
        }
        L = L -> prox;
    }
    if (cont == 0) {
        printf("Numero nao encontrado!\n");
    }
}

int main() {
    int num1, num2;
    Lista l = no(5, no(1, no(5, no(3, no(7, no(5, NULL))))));

    printf("Numero substituido: ");
    scanf("%d", &num1);
    printf("Numero substituto: ");
    scanf("%d", &num2);

    substitui(num1, num2, l);
    exibe(l);
    destroi(&l);

    return 0;
}
