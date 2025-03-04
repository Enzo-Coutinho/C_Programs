#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n)
{
    int f = 1;
    for(int i=1; i<=n; i++)
    {
        f *= i;
    }
    return f;
}

float coss(float degrees)
{
    float rad = degrees * M_PI / 180.0;
    float result = rad;
    for(int i=1; i<5; i++)
    {
        int k = 2 * i;
        result += ((pow(-1, i)) / (fatorial(k))) * pow(rad, k);
    }
    return result;
}

int main()
{
    float angle;
    printf("Digit an angle in degrees: ");
    scanf("%f", &angle);

    printf("The cos of angle is: %f", coss(angle));

    return 0;
}
