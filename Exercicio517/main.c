#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int j = 0; j<=n; j++)
    {
        printf("%d", j);
        for(int i=j; i<2; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
