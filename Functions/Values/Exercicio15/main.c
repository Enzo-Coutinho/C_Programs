#include <stdio.h>
#include <stdlib.h>

void generator(int n)
{
    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}

int main()
{
    int value;
    scanf("%d", &value);

    generator(value);

    return 0;
}
