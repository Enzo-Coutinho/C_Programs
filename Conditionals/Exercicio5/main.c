#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n;
    printf("Digit a positive number: ");
    scanf("%f", &n);
    if(n < 0)
        printf("The number is negative!");
    else
    {
        float pw = pow(n, 2);
        float sqr = sqrt(n);
        printf("The square of number is: %lf \n", pw);
        printf("The square root of number is: %lf \n", sqr);
    }
    return 0;
}
