#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    for(int i=0; i<10; i++)
    {
        signed int value;
        scanf("%d", &value);
        sum += value;
    }
    printf("The media is: %.2f", (float)(sum / 10));
    return 0;
}
