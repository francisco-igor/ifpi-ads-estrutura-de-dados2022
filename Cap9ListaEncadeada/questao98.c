#include "../lista.h"

int enesimo(int x, Lista L) {
    if (L == NULL) {
        return 0;
    } else {
        int cont = 0;

        while (L != NULL) {
            cont++;

            if (x == cont) {
                return L -> item;
            }
            L = L -> prox;
        }
        return 0;
    }
}

int main() {
    int num;
    Lista l = no(5, no(1, no(5, no(3, no(7, no(5, NULL))))));

    printf("Posicao requerida: ");
    scanf("%d", &num);

    printf("%d", enesimo(num, l));
    destroi(&l);

    return 0;
}
