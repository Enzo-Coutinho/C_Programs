#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Digite tres coeficientes: ");
    scanf("%f %f % f", &a, &b, &c);


    if(a == 0)
    {
        printf("Nao e equacao de segundo grau!");
        return 0;
    }

    float discriminante = pow(b, 2) - (4 * a * c);

    if(discriminante < 0)
    {
        printf("Nao existe raiz");
        return 0;
    }

    float x1 = (-b + sqrt(discriminante)) / (2 * a);

    if(discriminante == 0)
    {
        printf("Raiz unica: %f", x1);
    } else if(discriminante > 0)
    {
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Duas raizes reais: %f e % f", x1, x2);
    }



    return 0;
}
