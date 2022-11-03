#include "../lista.h"

void ins(Item x, Lista *p) {
    while (*p != NULL && (*p) -> item > x) {
        p = &(*p) -> prox;
    }
    *p = no(x, *p);
}

int main() {
    int num, alg;

    printf("Quantidade de inteiros: ");
    scanf("%d", &num);

    Lista l = NULL;

    for (int i = 0; i < num; i++) {
        printf("Insira o elemento: ");
        scanf("%d", &alg);

        ins(alg, &l);
    }

    exibe(l);
    destroi(&l);

    return 0;
}
