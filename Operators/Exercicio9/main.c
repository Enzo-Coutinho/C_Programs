#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float degrees;
    scanf("%f", &degrees);
    float rad = degrees * M_PI / 180.0;
    printf("The value in radians is: %f", rad);
    return 0;
}
