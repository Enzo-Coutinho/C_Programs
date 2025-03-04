#include <stdio.h>
#include <stdlib.h>

void subgenerator(int i, int margem)
{
    for(int j=1; j<=i - margem; j++)
        printf("*");
    printf("\n");
}

void generator(int n)
{
    for(int i=1; i<=n; i++)
        subgenerator(i, 0);
    for(int i=n; i>0; i--)
        subgenerator(i, 1);
}

int main()
{
    int value;
    scanf("%d", &value);

    generator(value);

    return 0;
}
