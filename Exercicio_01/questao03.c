#include <stdio.h>

/* 
Leia uma velocidade em km/h, 
calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6).
*/

void main() {

    int kmh, ms;

    printf ("Digite uma velocidade em km/h: ");
    scanf ("%d", &kmh);

    ms = (kmh / 3.6) + 1;

    printf ("%dkm/h equivale(m) a %dm/s", kmh, ms);
}
