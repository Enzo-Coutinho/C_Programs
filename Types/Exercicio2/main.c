#include <stdio.h>
#include <stdlib.h>

struct coordenadas_cartesianas
{
    int x;
    int y;
};

int main()
{
    struct coordenadas_cartesianas ponto1 = {0, 0};
    printf("Escolha um ponto X e Y: ");
    scanf("%d %d", &ponto1.x, &ponto1.y);

    float modulo = sqrt(pow(ponto1.x, 2) + pow(ponto1.y, 2));
    printf("A distancia ate origem = %f", modulo);
    return 0;
}
