#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        sum += (float)(1.0/i);
    }
    printf("The harmonic number is: %.2f", sum);
    return 0;
}
