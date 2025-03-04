#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float volumeCilindro(float altura, float raio)
{
    return M_PI * pow(raio, 2) * altura;
}

int main()
{
    float altura, raio;
    scanf("%f %f", &altura, &raio);

    float volume = volumeCilindro(altura, raio);

    printf("%f", volume);

    return 0;
}
