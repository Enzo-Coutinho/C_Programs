#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        if(!(n % i))
        {
            printf("%d \n", i);
            continue;
        }
    }
    return 0;
}
