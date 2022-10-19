#include "../lista.h"

int soma(Lista L) {
    int soma = 0;

    while (L != NULL) {
        soma += L -> item;
        L = L -> prox;
    }
    return soma;
}

int main() {
    Lista l = no(5, no(1, no(5, no(3, no(7, no(5, NULL))))));

    printf("%d ", soma(l));
    destroi(&l);

    return 0;
}
