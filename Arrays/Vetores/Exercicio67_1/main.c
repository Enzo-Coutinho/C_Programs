#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[6] = {0};
    for(int i=0; i<6; i++)
    {
        scanf("%d", &values[i]);
    }
    for(int i=0; i<6; i++)
    {
        printf("%d \n", values[i]);
    }
    return 0;
}
