#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
  float x, y;
} Ponto;

typedef struct
{
    Ponto pontoSuperiorEsquerdo;
    Ponto pontoInferiorDireito;
} Rectangle;

int main()
{
    Rectangle rectangle;

    printf("Defina as coordenadas X e Y do ponto superior esquerdo: ");
    scanf("%f %f", &rectangle.pontoSuperiorEsquerdo.x, &rectangle.pontoSuperiorEsquerdo.y);

    printf("Defina as coordenadas X e Y do ponto inferior direito: ");
    scanf("%f %f", &rectangle.pontoInferiorDireito.x, &rectangle.pontoInferiorDireito.y);

    float diffX = -rectangle.pontoInferiorDireito.x + rectangle.pontoSuperiorEsquerdo.x;
    float diffY = -rectangle.pontoInferiorDireito.y + rectangle.pontoSuperiorEsquerdo.y;

    float diagonalComprimento = sqrt(pow(diffX, 2) + pow(diffY, 2));
    printf("O comprimento da diagonal eh: %f", diagonalComprimento);

    float perimeter = (diffX * 2) + (diffY * 2);
    printf("O perimetro eh: %f", perimeter);

    float area = diffX * diffY;
    printf("Area eh: %f", area);
    return 0;
}
