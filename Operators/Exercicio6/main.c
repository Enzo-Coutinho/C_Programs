#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velocity_km;
    printf("Digite uma velocidae em km/h: ");
    scanf("%f", &velocity_km);
    printf("A velocidade em m/s eh: %f", velocity_km / 3.6);
    return 0;
}
