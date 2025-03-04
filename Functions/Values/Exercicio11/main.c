#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int x, int y)
{
    return pow(x, y);
}

int main()
{
    int x, y;
    printf("Digit two numbers: ");
    scanf("%d %d", &x, &y);

    int resultado = potencia(x, y);

    printf("O resultado eh: %d", resultado);

    return 0;
}
