#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantify;
    int count = 0;
    float max;
    scanf("%d", &quantify);
    for(int i=0; i<quantify; i++)
    {
        float value;
        scanf("%f", &value);
        if(value > max)
        {
            count++;
            max = value;
        }
    }
    printf("The max value is: %.2f \n", max);
    printf("The quantify of max value is: %d", count);
    return 0;
}
