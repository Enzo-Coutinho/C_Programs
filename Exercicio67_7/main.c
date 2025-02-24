#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10] = {0};
    for(int i=0; i<10; i++)
    {
        scanf("%d", &x[i]);
    }
    int max, min;
    max = min = x[0];
    for(int i=0; i<10; i++)
    {
        if(x[i] > max)
        {
            max = x[i];
        } else if(x[i] < min)
        {
            min = x[i];
        }
    }
    printf("The max value is: %d \n", max);
    printf("The min value is: %d", min);
    return 0;
}
