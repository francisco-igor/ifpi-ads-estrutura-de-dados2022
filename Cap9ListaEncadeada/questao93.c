#include "../lista.h"

int ultimo(Lista L) {
    if (L == NULL) {
        return -1;
    } else {
        int ultimo;

        while (L != NULL) {
            ultimo = L -> item;
            L = L -> prox;
        }
        return ultimo;
    }
}

int main() {
    Lista l = no(5, no(1, no(5, no(3, no(7, no(5, NULL))))));

    printf("%d ", ultimo(l));
    destroi(&l);

    return 0;
}
