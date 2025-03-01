#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float x, y;
} Ponto;

typedef struct
{
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Rectangle;

int main()
{
    Rectangle rectangle;
    printf("Defina as coordenadas X e Y do ponto superior esquerdo e inferior direito de um retangulo: ");
    scanf("%f %f %f %f", &rectangle.superiorEsquerdo.x,
          &rectangle.superiorEsquerdo.y,
          &rectangle.inferiorDireito.x,
          &rectangle.inferiorDireito.y);

    Ponto ponto;
    printf("Escolha as coordenadas X e Y de um ponto: ");
    scanf("%f %f", &ponto.x, &ponto.y);

    int dentroX = (rectangle.superiorEsquerdo.x <= ponto.x) && (ponto.x <= rectangle.inferiorDireito.x);
    int dentroY = (rectangle.inferiorDireito.y <= ponto.x) && (ponto.x <= rectangle.superiorEsquerdo.y);
    if(dentroX && dentroY) printf("O ponto esta dentro do retangulo!");
    else printf("O ponto esta fora do retangulo");

    return 0;
}
