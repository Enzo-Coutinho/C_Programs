#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float volumeEsfera(float raio)
{
    return (4.0/3.0) * M_PI * pow(raio, 3);
}

int main()
{
    float raio;
    scanf("%f", &raio);

    float volume = volumeEsfera(raio);

    printf("%f", volume);

    return 0;
}
