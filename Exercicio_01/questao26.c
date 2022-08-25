#include <stdio.h>

/*
Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros).
*/

void main() {

    int anos, cigarros, dias, num, dinheiro, carteira = 20;
    float preco, total;

    printf("Quantos anos de fumante: ");
    scanf("%d", &anos);

    printf("Quantos cigarros por dia: ");
    scanf("%d", &cigarros);

    printf("Valor da carteira: ");
    scanf("%f", &preco);

    
    dias = anos * 365;
    num = dias * cigarros;
    dinheiro = num / carteira;
    total = preco * dinheiro;

    printf("O total gasto foi de R$%.2f", total);
}
