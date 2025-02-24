#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[10] = {0};
    int count = 0;
    for(int i=0; i<10; i++)
    {
        int value;
        scanf("%d", &value);
        values[i] = value;
        if(!(value % 2))
        {
            count++;
        }
    }
    printf("The number of par values are: %d", count);
    return 0;
}
