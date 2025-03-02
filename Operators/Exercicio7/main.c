#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, cotacaoDolar;
    printf("Digite um valor monetario: ");
    scanf("%f", &reais);
    printf("Cotacao dolar: ");
    scanf("%f", &cotacaoDolar);
    printf("O valor em dolar eh: %f", reais / cotacaoDolar);
    return 0;
}
