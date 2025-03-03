#include <stdio.h>
#include <stdlib.h>

int main()
{
    float max, min;
    for(int i=0; i<10; i++)
    {
        float value;
        scanf("%f",&value);
        if(value < min)
        {
            min = value;
        } else if(value > max)
        {
            max = value;
        }
    }
    printf("The max value is: %.2f \n", max);
    printf("The min value is: %.2f \n", min);
    return 0;
}
