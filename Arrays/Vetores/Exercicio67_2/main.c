#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value[6] = {0};
    for(int i=0; i<=5; i++)
    {
        scanf("%d", &value[i]);
    }
    for(int i=5; i>=0; i--)
    {
        printf("%d \n", value[i]);
    }
    return 0;
}
