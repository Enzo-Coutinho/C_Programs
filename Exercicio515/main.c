#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int max, min = 1;
    while(n >= 0)
    {
        scanf("%d", &n);
        if(n < min)
        {
            min = n;
        } else if(n > max)
        {
            max = n;
        }
    }
    printf("The max is: %d \n", max);
    printf("The min is: %d", min);
    return 0;
}
