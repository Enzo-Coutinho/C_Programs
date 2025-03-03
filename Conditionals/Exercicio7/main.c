#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorProduto, imposto;
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    int estado;
    printf("Digite MG(1), SP(2), RJ(3), MS(4): ");
    scanf("%d", &estado);

    switch(estado)
    {
        case 1:
            {
                imposto = 107.0;
                break;
            }
        case 2:
            {
                imposto = 112.0;
                break;
            }
        case 3:
            {
                imposto = 115.0;
                break;
            }
        case 4:
            {
                imposto = 108.0;
                break;
            }
    }

    printf("O valor final do produto fica como: %f", valorProduto * (imposto / 100.0));
    return 0;
}
