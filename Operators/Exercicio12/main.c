#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    float h = sqrt(pow(a, 2) + pow(b, 2));
    printf("h is: %f", h);
    return 0;
}
