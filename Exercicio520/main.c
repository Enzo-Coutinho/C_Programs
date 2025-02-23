#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum = 0;
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        float div = 1;
        for(int j=1; j<=i; j++)
        {
            div *= j;
        }
        sum += 1.0/div;
    }
    printf("%.2f", sum);
    return 0;
}
