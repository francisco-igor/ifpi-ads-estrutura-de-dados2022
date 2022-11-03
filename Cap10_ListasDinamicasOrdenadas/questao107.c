#include "../polinomio.h"

Poli soma(Poli p, Poli q) {
    Poli r = NULL;

    while (p != NULL) {
        int x = p->coef + q->coef;
        adt(x, p -> expo, &r);
        p = p -> prox;
        q = q -> prox;
    }
    return r;
}

int main() {
    Poli P = termo(7, 3, termo(2, 2, termo(-5, 1, NULL)));
    Poli Q = termo(-5, 3, termo(1, 2, termo(-7, 1, NULL)));

    exibe(soma(P, Q));

    destroi(&P);
    destroi(&Q);

    return 0;
}
