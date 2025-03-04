#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float serie(int n)
{
    float sum = 0;
    for(int i=1; i<=n; i++)
    {
        float up = pow(i, 2) + 1;
        float down = i + 3;
        sum += (up / down);
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("The serie is: %f", serie(n));

    return 0;
}
