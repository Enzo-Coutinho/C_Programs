#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int oper;
    scanf("%d", &oper);
    float resultado;
    switch(oper)
    {
    case 1:
        {
            resultado = n1 * n2 * n3;
            break;
        }
    case 2:
        {
            resultado = n1 + 2 * n2 + 3 * n3;
            resultado /= 6;
            break;
        }
    case 3:
        {
            resultado = 1 / ((1/n1) + (1/n2) + (1/n3));
            break;
        }
    case 4:
        {
            resultado = (n1 + n2 + n3) / 3;
            break;
        }
    }

    printf("O resultado eh: %f", resultado);

    return 0;
}
