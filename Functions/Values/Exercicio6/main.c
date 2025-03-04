#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float IMC(float mass, float height)
{
    return mass / pow(height, 2);
}

int main()
{
    float mass, height;
    scanf("%f %f", &mass, &height);


    float imc = IMC(mass, height);

    printf("%f", imc);

    return 0;
}
