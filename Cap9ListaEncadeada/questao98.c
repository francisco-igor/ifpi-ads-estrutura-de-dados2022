#include "../lista2.h"

Item enesimo(int x, Lista L) {
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
    Lista l = no('a', no('b', no('c', no('d', NULL))));

    printf("Posicao requerida: ");
    scanf("%d", &num);

    printf("%c", enesimo(num, l));
    destroi(&l);

    return 0;
}
