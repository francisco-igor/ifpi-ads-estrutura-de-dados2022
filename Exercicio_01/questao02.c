#include <stdio.h>

/* 
Leia o valor do dólar e um valor em dólar, 
calcule e escreva o equivalente em real (R$).
*/

void main() {

    float dolarvalor, valordolar, valorreal;

    printf ("Insira o valor do dolar: ");
    scanf ("%f", &dolarvalor);

    printf ("Insira um valor em dolar: ");
    scanf ("%f", &valordolar);

    valorreal = valordolar * dolarvalor;

    printf ("$ %.2f equivale(m) a R$ %.2f", valordolar, valorreal);
}
