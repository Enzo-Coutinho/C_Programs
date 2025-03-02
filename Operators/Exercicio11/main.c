#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio;
    printf("R circle: ");
    scanf("%f", &raio);
    float area = M_PI * pow(raio, 2);
    printf("The A is: %f", area);
    return 0;
}
