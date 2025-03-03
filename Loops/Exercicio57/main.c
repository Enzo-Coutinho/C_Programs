#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 0;
    for(int i=10; i>0; i--)
    {
        float value;
        scanf("%f", &value);
        n += value;
    }
    printf("%.2f", n);
    return 0;
}
