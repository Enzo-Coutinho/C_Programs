#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum = 0;
    for(int i=0; i<10; i++)
    {
        float value;
        scanf("%f", &value);
        sum += value;
    }
    printf("The media is equal to: %.2f", (sum / 10));
    return 0;
}
