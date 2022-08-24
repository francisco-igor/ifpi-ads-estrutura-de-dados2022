#include <stdio.h>

/* 
Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. 
(Vkm/h = Vm/s * 3.6)
*/

void main() {

    int ms, kmh;

    printf ("Digite uma velocidade em m/s: ");
    scanf ("%d", &ms);

    kmh = ms * 3.6;

    printf ("%dm/s equivale(m) a %dkm/h\n", ms, kmh);
}
