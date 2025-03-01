#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  float x;
  float y;
} coordenadas_cartesianas;

int main()
{
    coordenadas_cartesianas ponto1 = {0, 0};
    printf("Digite uma coordenada X e Y: ");
    scanf("%f %f", &ponto1.x, &ponto1.y);

    coordenadas_cartesianas ponto2 = {0, 0};
    printf("Digite uma coordenada X e Y: ");
    scanf("%f %f", &ponto2.x, &ponto2.y);

    float distance = sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
    printf("The distance is: %f", distance);
    return 0;
}
