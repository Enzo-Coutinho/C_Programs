#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float h, r;
    scanf("%f %f", &h, &r);
    float vol = M_PI * pow(r, 2) * h;
    printf("Vol: %f", vol);
    return 0;
}
