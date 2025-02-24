#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value[8] = {0};
    for(int i=0; i<8; i++)
    {
        scanf("%f", &value[i]);
    }
    int x, y;
    scanf("%d %d", &x, &y);
    float sum = value[x] + value[y];
    printf("The sum is: %f", sum);
    return 0;
}
