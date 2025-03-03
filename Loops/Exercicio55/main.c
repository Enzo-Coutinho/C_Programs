#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    for(int i=0; i<=50; i++)
    {
        if(i % 2)
        {
            n += i;
        }
    }
    printf("The sum is equal to: %d", n);
    return 0;
}
