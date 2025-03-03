#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 55, odd=1;
    float sum = 0;
    for(float i=1; i<=n; i++, odd += 2)
    {
        if(odd % 2)
        {
            printf("%d / %f \n", odd, i);
            sum += (odd / i);
        }
    }
    printf("The sum is: %f", sum);
    return 0;
}
