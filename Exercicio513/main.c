#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1000;
    for(int i = 1; i<1000; i++)
    {
        if(!(i % 3) || !(i % 5))
        {
            printf("%d \n", i);
        }

    }
    return 0;
}
